//9. Write a program to demonstrate difference between p and *p
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("Value of a = %d\n", a);
    printf("Value of p = %p\n", (void *)p);
    printf("Value of *p = %d\n", *p);
    return 0;
}
