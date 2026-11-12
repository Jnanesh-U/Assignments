//8. Write a program to demonstrate that changing a variable Through a pointer changes its original value.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("Before changing = %d\n", a);
    *p = 50;
    printf("After changing = %d\n", a);
    return 0;
}
