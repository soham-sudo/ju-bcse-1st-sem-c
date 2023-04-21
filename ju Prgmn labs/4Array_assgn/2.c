#include<stdio.h>
void reverse(int [],int);
int main()
{
    int a,b=0 ,n[100]={0},m[100]={0};
    //m = array of np. of dublicates, o= occurence
    printf("no of integers in array: ");
    scanf("%d", &a);
    printf("Input:\n");
    for(int i=0; i<a;i++)
    {
        scanf("%d", &n[i]);
    }
    for(int i=0; i<a;i++)
    {
        m[i]++;
        for(int j=0; j<i;j++)
        if(n[i] == n[j])
            m[i]++;
    }
    /* prints occurence of n[i] until ith element
    for(int i=0; i<a;i++)
        printf("%d, ",m[i]);
    */
    for(int i=0; i<a;i++)
    {
        if(m[i] > 1)
            b++;
    }

    printf("\nNo of dublicate: %d\n", b);
    for(int i=0,j=0; j<a;j++)
    {
        if(m[j]>1)
            continue;
        n[i] = n[j];
        i++;
    }
    reverse(n,a-b);
}
void reverse(int n[],int a)
{
    for(int i=0; i<a; i++)
    {
        printf("%d,",n[a-1-i]);
    }
}
