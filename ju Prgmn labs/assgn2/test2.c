#include<stdio.h>
int main()
{
    double n;
    
    printf("Input value: ");
    scanf("%lf", &n);
    char s;
    fflush(stdin);
    printf("Unit(d || g || r): ");
    scanf("%c", &s);
    printf("%c",s);
}
    