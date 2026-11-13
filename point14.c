//24. Program to find the sum of array elements using pointer arithmetic.
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int i, sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum = sum + *(p + i);
    }
    printf("Sum = %d", sum);
    return 0;
}
