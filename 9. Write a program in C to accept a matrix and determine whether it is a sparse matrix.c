// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("Enter a matrix\n");
    printf("Number of Rows = ");
    scanf("%d", &a);
    printf("Number of Coulmn = ");
    scanf("%d", &b);
    int arr[a][b];
    for (i = 0; i < a; i++)
    {
        printf("Enter %d Number for Row No : %d - \n", b, i + 1);
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix is = \n");
    printf("************************\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("************************\n");
    int x = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (arr[i][j] == 0)
            {
                x++;
            }
        }
    }
    if (x > (a * b) / 2)
        printf("Sparse Matrix\n");
    else
        printf("Not a Sparse Matrix\n");
    return 0;
}