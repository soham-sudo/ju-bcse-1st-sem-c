#include<stdio.h>
int sum(int n)
{
    if(n<10)
        return n;
    int a = n%10 + sum(n/10);
    return a;
}
int main()
{
    int n;
    printf("input: ");
    scanf("%d",&n);
    printf("%d",sum(n));
}
