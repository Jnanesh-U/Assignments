//30. Program to swap two numbers using a double pointer.
#include <stdio.h>
int main()
{
    int a = 10, b = 20, temp;
    int *p = &a;
    int *q = &b;
    int **x = &p;
    int **y = &q;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = **x;
    **x = **y;
    **y = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
