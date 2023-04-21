#include<stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    for(int i=0; i<2*n+1; i++)
    {
        for(int j=0; j<2*n+1; j++)
        {
            if((i>0 && i<n+1)&&(j>(n-i) && j<(n+i)) || (i>=n+1 && i<2*n+1)&&(j>(i-n) && j<(2*n-(i-n))))
                printf(" ");
            else
                printf("+");
        }
        printf("\n");
    }
}
