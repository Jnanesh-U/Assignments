//5. Write a program to change the value of variable using a pointer.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    *p = 50;
    printf("Value of a = %d", a);
    return 0;
}
