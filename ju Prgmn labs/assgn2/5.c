#include<stdio.h>
#include<math.h>
void sine(double n);
long long int fac(int n);
int main()
{
    const float pi = 3.1415926;
    double n;
    
    printf("Input value: ");
    scanf("%lf", &n);
    fflush(stdin);
    char s;
    printf("Unit(d || g || r): ");
    scanf(" %c",&s);
    switch(s)
    {
        case 'd':
            n=n*(pi/180);
            break;
        case 'g':
            //1g = 100th of 90
            n=n*(pi/400);
            break;
    }
    sine(n);
}

void sine(double n)
{
    double sum=0;
    for(int i=1, m=0; m<10; i+=2, m++)
    {
        double a=pow(n,i),c=pow(-1,m);
        long long int b = fac(i);
        sum +=  c*(a/b);
    }
    printf("%.2lf", sum);
}

long long int fac(int n)
{
    //will show error if sum=0 used as we are multiplying
    long long int fac = 1;
    for(int i=1; i<=n; i++)
    {
        fac *=i;
    }
    return fac;
}
