//1. Write a program to declare and initialize a pointer.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d\n", *p);
    return 0;
}
