#include<stdio.h>
void print(int a[])
{
    for(int i=0; i<4;i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
}
void array(int a[], int n)
{
     
    for(int i=0; i<4;i++)
    {
        a[i] = n%10;
        n=n/10;
    }
}
int num(int a[])
{
    int sum=0;
    for(int i=0, d=1000; i<4; d=d/10, i++)
    {
        sum += a[i]*d;
    }
    return sum;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}
void reverse(int a[],int b[],int n)
{
    
    for(int i=0; i<n; i++)
        b[i] = a[n-1-i];
}

int main()
{
    int n,sum1=0, sum2=0;
    printf("Input: ");
    scanf("%d",&n);
    do
    {
        int a[4]={0},b[4]={0};
        array(a, n);
        //print(a);
        selectionSort(a, 4);
        //arranges in ascending order
        //print(a);
        reverse(a, b, 4);
        //print(b);
        //printf("%d %d\n", num(b), num(a));
        sum1 = num(b) - num(a);
        //printf("%d",sum1);
        n=sum1;

        array(a, n);
        
        selectionSort(a, 4);
        
        reverse(a, b, 4);
        
        sum2 = num(b) - num(a);
        
        n=sum2;
    }while(sum1 != sum2);
    printf("%d", sum1);
}