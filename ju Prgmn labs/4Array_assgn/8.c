#include <stdio.h>
int main()
{
    int n;
    printf("Enter order of matrix\n");
    scanf("%d",&n);
    int a[n][n], i, j, temp;
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(i != j)
            {
                a[i][j] = a[i][j]^a[j][i];
                a[j][i] = a[i][j]^a[j][i];
                a[i][j] = a[i][j]^a[j][i];
            }
        }
    }
    printf("Transpose:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}