#include<stdio.h>
void binary(int n)
{
    if(n<2)
    {
        printf("%d",n);
        return;
    }
    binary(n/2);
    printf("%d", n%2);
}
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    binary(n);
    printf("\n");
}