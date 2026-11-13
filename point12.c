//22. Program to access array elements using pointer arithmetic.
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}
