#include <stdio.h>
int  c[3][3];
void sum(int a[][3], int b[][3])
{
    printf("The sum of the two matrices is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void sub(int a[3][3], int b[3][3])
{
    printf("The difference of the two matrices is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void mul(int a[3][3], int b[3][3])
{
    printf("The product of the two matrices is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3], b[3][3], i, j,n;
    void (*p[])(int a[3][3], int b[3][3]) = {sum, sub, mul};
    printf("Enter the elements of the first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Input: 0 for +, 1 for -, 2 for * ");
    scanf("%d",&n);

    p[n](a,b);
}