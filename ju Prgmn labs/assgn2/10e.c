#include<stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    int t=n,m=0;
    for(int i=0; i<n; i++)
    {
        for(int j=t; j>=i; j--)
            printf("%d",j);
        t--;
        m++;
        if(m == n/2 +1)
            break;
        printf("\n");
    }
}
