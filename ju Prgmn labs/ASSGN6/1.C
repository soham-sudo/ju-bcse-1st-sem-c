#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f (float x)
{
    return (x*x*x - 20);
}

void bisection (float *x, float a, float b, int *itr)
/* this function performs and prints the result of one iteration */
{
    *x=(a+b)/2;
    ++(*itr);
    printf("Iteration no. %3d X = %7.5f\n", *itr, *x);
}
void Bisection ()
{
    int itr = 0, maxmitr;
    float x, a, b, allerr, x1;
    printf("\nEnter the values of a, b, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &a, &b, &allerr, &maxmitr);
    bisection (&x, a, b, &itr);
    do
    {
        if (f(a)*f(x) < 0)
            b=x;
        else
            a=x;
        bisection (&x1, a, b, &itr);
        if (fabs(x1-x) < allerr)
        {
            printf("After %d iterations, root = %6.4f\n", itr, x1);
            exit(0);
        }
        x=x1;
    }
    while (itr < maxmitr);
    printf("The solution does not converge or iterations are not sufficient");
}
void regula (float *x, float x0, float x1, float fx0, float fx1, int *itr)
{
    *x = x0 - ((x1 - x0) / (fx1 - fx0))*fx0;
    ++(*itr);
    printf("Iteration no. %3d X = %7.5f \n", *itr, *x);
}
void Regula_falsi ()
{
    int itr = 0, maxmitr;
    float x0,x1,x2,x3,allerr;
    printf("\nEnter the values of x0, x1, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &x0, &x1, &allerr, &maxmitr);
    regula (&x2, x0, x1, f(x0), f(x1), &itr);
    do
    {
        if (f(x0)*f(x2) < 0)
            x1=x2;
        else
            x0=x2;
        regula (&x3, x0, x1, f(x0), f(x1), &itr);
        if (fabs(x3-x2) < allerr)
        {
            printf("After %d iterations, root = %6.4f\n", itr, x3);
            exit(0);
        }
        x2=x3;
    }
    while (itr<maxmitr);
    printf("Solution does not converge or iterations not sufficient:\n");
}
float df (float x)
{
    return 3*x*x;
}
void Newton_rapson()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(h) < allerr)
        {
            printf("After %d iterations, root = %8.6f\n", itr, x1);
            exit(0);
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
}
int main()
{
	int n;
	printf("case:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			Bisection();
			break;
		case 2:
			Regula_falsi();
			break;
		case 3:
		        Newton_rapson();
		        break;
	}
}