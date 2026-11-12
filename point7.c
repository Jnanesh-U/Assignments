//7. Write a program to demonstrate pointers of different data types
#include <stdio.h>
int main()
{
    int a = 10;
    char b = 'A';
    float c = 5.5;
    int *p1 = &a;
    char *p2 = &b;
    float *p3 = &c;
    printf("Integer value = %d\n", *p1);
    printf("Character value = %c\n", *p2);
    printf("Float value = %.2f\n", *p3);
    return 0;
}
