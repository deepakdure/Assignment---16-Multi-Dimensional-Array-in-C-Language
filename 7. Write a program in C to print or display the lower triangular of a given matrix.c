//. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("Enter a square matrix\n");
    printf("Number of Rows = ");
    scanf("%d", &a);
    printf("Number of Coulmn = ");
    scanf("%d", &b);
    int arr[a][b];
    if (a == b)
    {
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
        printf("Lower Triangular Matrix is - \n");
        for (i = 0; i < a; i++)
        {
            int x = 0;
            for (j = 0; j < b; j++)
            {
                if (j > i)
                {
                    printf("%3d", x);
                }
                else
                    printf("%3d", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Please enrter a square matrix (Eg - 2*2 ,3*3 ,4*4)");
    return 0;
}