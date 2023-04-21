#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("No.of integer: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d,", *(a+i));
        sum += *(a+i);
    }
    printf("\nsum = %d",sum);
}