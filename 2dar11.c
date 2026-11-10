//7. Program to find smallest element in matrix.
#include <stdio.h>
int main()
{
    int a[2][3] = {{10, 25, 5}, {40, 15, 30}};
    int i, j, smallest;
    smallest = a[0][0];
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] < smallest)
            {
                smallest = a[i][j];
            }
        }
    }
    printf("Smallest element = %d", smallest);
    return 0;
}
