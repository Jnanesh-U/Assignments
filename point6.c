//6. write a program to print  the values and address of multiple variables using pointer
#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    printf("Value of a = %d\n", *p1);
    printf("Address of a = %p\n", (void *)p1);
    printf("Value of b = %d\n", *p2);
    printf("Address of b = %p\n", (void *)p2);
    printf("Value of c = %d\n", *p3);
    printf("Address of c = %p\n", (void *)p3);
    return 0;
}
