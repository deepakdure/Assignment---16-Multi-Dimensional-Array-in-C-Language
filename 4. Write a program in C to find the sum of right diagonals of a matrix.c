// 4. Write a program in C to find the sum of right diagonals of a matrix
#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("\nEnter a square matrix\n");
    printf("Number of Rows = ");
    scanf("%d", &a);
    printf("Number of Coulmn = ");
    scanf("%d", &b);
    if (a == b)
    {
        int arr[a][b];
        for (i = 0; i < a; i++)
        {
            printf("Enter %d Number for %d Row\n", b, i + 1);
            for (j = 0; j < b; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Matrix is = \n");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                printf("%4d", arr[i][j]);
            }
            printf("\n");
        }
        int sum = 0;
        printf("Sum of Right Diagonals is = ");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                if (j == a - i - 1)
                {
                    sum = sum + arr[i][j];
                }
            }
        }
        printf("%d", sum);
    }
    else
    {
        printf("Not Possible of it's diagonals Sum");
    }
    return 0;
}
