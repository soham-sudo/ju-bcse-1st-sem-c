#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter matrix row column\n");
    scanf("%d %d",&r,&c);
    int a[r][c], i, j, temp;
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (j = 0; j < c; j++)
    {
        for (i = 0; i < r; i++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}