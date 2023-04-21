#include<stdio.h>
int main()
{
    int n[100], a;
    printf("no of integers in array: ");
    scanf("%d", &a);
    printf("Input:\n");
    for(int i=0; i<a;i++)
    {
        scanf("%d", &n[i]);
    }
    for(int i=0; i<a; i++)
    {
        printf("%d,",n[a-1-i]);
    }
}