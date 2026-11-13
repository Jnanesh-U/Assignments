//26. Program to declare and initialize a double pointer and print the value of a variable using it.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("Value of a = %d\n", a);
    printf("Value using single pointer = %d\n", *p);
    printf("Value using double pointer = %d\n", **q);
    return 0;
}
