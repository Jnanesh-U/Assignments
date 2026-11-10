//4. Program to Perform Transpose of a Matrix
#include <stdio.h>
int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2];
    int i, j;
    // Transpose of matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    // Display transpose matrix
    printf("Transpose Matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
