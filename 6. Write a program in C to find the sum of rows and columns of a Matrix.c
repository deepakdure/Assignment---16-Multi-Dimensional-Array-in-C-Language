// 6. Write a program in C to find the sum of rows and columns of a Matrix
#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("Enter a square matrix\n");
    printf("Number of Rows = ");
    scanf("%d", &a);
    printf("Number of Coulmn = ");
    scanf("%d", &b);
    if (a == b)
    {
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
        int sum;
        for (i = 0; i < a; i++)
        {
            sum = 0;
            for (j = 0; j < b; j++)
            {
                sum = sum + arr[i][j];
            }
            printf("Sum of Row No : %d ==== %d\n", i + 1, sum);
        }
        printf("************************\n");
        int s;
        for (i = 0; i < a; i++)
        {
            s = 0;
            for (j = 0; j < b; j++)
            {
                s = s + arr[j][i];
            }
            printf("Sum of Coulmn No : %d ==== %d\n", i + 1, s);
        }
    }
    else
    {
        printf("please enter a square martrix");
    }

    return 0;
}