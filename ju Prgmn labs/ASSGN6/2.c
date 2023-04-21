#include<stdio.h>

#include<math.h>
float f (float x)
{
    return (x*tan(x));
}

float df(float x){
 return tan(x) + x/pow(cos(x),2);
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
    float x, a, b, a1, b1, allerr, x1;
    printf("\nEnter the values of a, b, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &a, &b, &allerr, &maxmitr);
    for(int i=0;i<3; i++,a=a+3.14,b=b+3.14,itr=0){
    a1=a,b1=b;
    bisection(&x, a1, b1, &itr);
    do
    {
        if (f(a1)*f(x) < 0)
            b1=x;
        else
            a1=x;
        bisection (&x1, a1, b1, &itr);
        if (fabs(x1-x) < allerr)
        {
            printf("After %d iterations, root %d = %6.4f\n", itr,i, x1);
            goto end;
        }
        x=x1;
    }
    while (itr < maxmitr);
    printf("The solution does not converge or iterations are not sufficient");
    end: ;
    }
}
void Newton_rapson()
{
    int itr, maxmitr;
    float h,x, x0, x1,y, allerr;
    printf("\nEnter x, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x, &allerr, &maxmitr);
    for(int i=0; i<3; i++,itr=0,x+= 3.14)
    {
        x0 = x;
    for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(x0-x1) < allerr)
        {
            printf("After %d iterations, root%d = %8.6f\n", itr,i, x1);
            goto end;
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    end: ;
}
}
int main()
{
    int n;
    printf("1 for bisection , 2 for newton raphson: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
	    Bisection();
        break;
    case 2 :
        Newton_rapson();
        break;
    }
}