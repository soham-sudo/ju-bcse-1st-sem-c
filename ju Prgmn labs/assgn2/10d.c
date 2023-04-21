#include<stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    int m=1;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=2*n-1-i; j++)
        {
            printf(" ");
        }
        if(i%2 ==1)
        {
            for(int k=1; k<=m; k++)
            {
                printf("%d ",k);
            }
            for(int l=m-1; l>0; l--)
            {
                printf("%d ",l);
            }
        }
        else
        {
            for(int k=1; k<=m; k++)
            {
                printf("%d ",k);
            }
            for(int l=m; l>0; l--)
            {
                printf("%d ",l);
            }
            m++;
        }
        printf("\n");
    }
}

