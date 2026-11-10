//10. Program to find frequency of an element in a matrix.
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {2, 4, 2}, {5, 2, 6}};
    int i, j, element = 2, count = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] == element)
            {
                count++;
            }
        }
    }
    printf("Frequency of %d = %d", element, count);
    return 0;
}
