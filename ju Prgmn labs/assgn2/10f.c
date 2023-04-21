#include<stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    for(int i=1,t=1; i<=n; i++,t+=2)
    {
        for(int j=1; j<=n-i;j++)
            printf(" ");
        for(int k=1; k<=t;k++)
            printf("+");
        printf("\n");
    }
    int t=2*n-3;
    for(int a=0; a<n-1;a++,t-=2)
    {
        for(int j=0;j<=a;j++)
            printf(" ");
        for(int k=t;k >0;k--)
            printf("+");
        if(a==3)
        {
            break;
        }
        printf("\n");
    }
}
