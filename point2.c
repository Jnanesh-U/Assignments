//2. Write a program to print address of a variable using pointer.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Address of a = %p", (void *)p);
    return 0;
}
