// 10. Write a program in C to find the row with maximum number of 1s
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, i, j;
    printf("Enter no of row and coulmn\n");
    printf("Enter Numbers in binary form\n");
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
    printf("************************\n");
    printf("Matrix is = \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("************************\n");
    int y = 0, z;
    for (i = 0; i < a; i++)
    {
        int x = 0;
        for (j = 0; j < b; j++)
        {
            if (arr[i][j] == 1)
            {
                x++;
            }
        }
        if (x > y)
        {
            y = 0;
            z = 0;
            y = x;
            z = i + 1;
        }
    }
    printf("The index of row with maximum 1s is:  %d ", z);
    return 0;
}