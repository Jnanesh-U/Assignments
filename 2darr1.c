//2d array
1. Program to Input and Display a Matrix
#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter matrix elements:\n");
    // Input matrix elements
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Display matrix
    printf("Matrix is:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
