// 3. Write a program in C to find the transpose of a given matrix
#include <stdio.h>
int main()
{
    int i, j, a, b;
    printf("Enter the number of row and coulmn - \n");
    scanf("%d%d", &a, &b);
    int arr[a][b], transpose[b][a];
    for (i = 0; i < a; i++)
    {
        printf("Enter %d elements for %d row - \n", b, i + 1);
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
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    printf("After Transposr this Matrix is = \n");
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%4d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}