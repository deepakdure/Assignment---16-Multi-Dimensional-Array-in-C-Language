// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int n = 3;
void input1(int[][n], int);
void input2(int[][n], int);
void output(int[][n], int[][n], int[][n], int);
int main()
{
    int a[n][n], b[n][n], c[n][n];
    input1(a, n);
    input2(b, n);
    output(a, b, c, n);
    return 0;
}
void input1(int a[][n], int n)
{
    int i, j;
    printf("enter 9 number for 1'st matrix - \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void input2(int b[][n], int n)
{
    int i, j;
    printf("enter 9 number for 2'nd matrix - \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
}
void output(int a[][n], int b[][n], int c[][n], int n)
{
    int i, j, sum;
    printf("Product of two matrices is = \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}