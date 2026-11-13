//27. Program to print the value and address of a variable using a double pointer.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("Value of a = %d\n", **q);
    printf("Address of a = %p\n", (void *)*q);
    printf("Address of p = %p\n", (void *)q);
    printf("Address of q = %p\n", (void *)&q);
    return 0;
}
