//2. Program to Add Two Matrices
#include <stdio.h>
int main()
{
    int a[2][2]={1,2,1,2}, b[2][2]={1,1,2,2};
    int i, j, sum[10][10];
    // Addition of two matrices
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of two matrices:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j <2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
