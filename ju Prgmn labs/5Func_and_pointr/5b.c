#include<stdio.h>
int main()
{
    char str[20] = {'\0'};
    int n, m=0;
    printf("Input: ");
    scanf("%d", &n);
    int t = n;
    while(t>0)
    {
        m++;
        t /= 10;
    }
    for(int i=0;i<m; i++, n /= 10)
    {
        str[m-i-1] = n%10 + '0';
    }
    printf("%s",str);
}