////7. Program to find the product of all array elements.
#include <stdio.h>
int main()
{
    int i, product = 1;
    int a[5] = {1, 2, 3, 4, 5};
    for(i = 0; i < 5; i++)
    {
       product = product * a[i];
    }
    printf("Product of array elements = %d", product);
    return 0;
}
