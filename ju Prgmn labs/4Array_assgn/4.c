#include <stdio.h>
int main()
{
    int n;
    printf("No. of integer: ");
    scanf("%d",&n);
    int a[n], i, j, min, max, temp;
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The range of the array is %d\n", max - min);
}