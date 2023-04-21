#include<stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i+1;k++)
        {
            printf("%d",k);
        }
        for(int k=i; k>0;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(int i=0; i<n-1;i++)
    {
       for(int j=0; j<i+1; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=n-i-1;k++)
        {
            printf("%d",k);
        }
        for(int k=n-i-2; k>0;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}

