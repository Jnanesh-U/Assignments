//28. Program to change the value of a variable using a double pointer.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("Before modification = %d\n", a);
    **q = 50;
    printf("After modification = %d\n", a);
    return 0;
}
