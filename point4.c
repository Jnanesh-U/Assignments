//4. Program to demonstrate the use of & and *
#include <stdio.h>
int main()
{
    int a = 100;
    int *p;
    p = &a;
    printf("Address of a = %p\n", (void *)&a);
    printf("Address stored in p = %p\n", (void *)p);
    printf("Value of a = %d\n", *p);
    return 0;
}
