//21.Program to increment and decrement a pointer.
#include <stdio.h>
int main()
{
    int a[3] = {10, 20, 30};
    int *p = a;
    printf("Initial value = %d\n", *p);
    p++;
    printf("After increment = %d\n", *p);
    p--;
    printf("After decrement = %d\n", *p);
    return 0;
}
