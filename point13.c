//23. Program to print all array elements using a pointer without using array indexing ([]).
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p++;
    }
    return 0;
}
