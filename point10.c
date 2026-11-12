//10. Program to Demonstrate the Difference Between &a and *p
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("Address of a = %p\n", (void *)&a);
    printf("Value of *p = %d\n", *p);
    return 0;
}
