//29. Program to access and print all array elements using a double pointer.
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int **q = &p;
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(*q + i));
    }
    return 0;
}
