//9. Program to check whether a matrix is square matrix.
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    if(rows == cols)
    {
        printf("It is a Square Matrix");
    }
    else
    {
        printf("It is not a Square Matrix");
    }
    return 0;
}
