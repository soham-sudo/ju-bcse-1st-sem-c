#include<stdio.h>
#include<math.h>
float allerr;
int maxmitr;
float f (float x)
{
    return (x*x*x - 2.5*x*x - 2.46*x + 3.96);
}


float df (float x)
{
    return 3*x*x -5*x -2.46;
}
float Newton_rapson(float i)
{
    int itr=0;
    float h, x0=i, x1;
    
    for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(h) < allerr)
        {
            printf("After %d iterations, root = %8.6f\n", itr, x1);
            return x1;
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    return x0;
}
int main()
{
	printf("\nEnter allowed error and maximum iterations\n");
    	scanf("%f  %d", &allerr, &maxmitr);
	float r1 =Newton_rapson(0.5) , r2 = Newton_rapson(2.0), r3 = Newton_rapson(3.0);
	printf("root1=%f root2=%f root3=%f",r1,r2,r3);
}
