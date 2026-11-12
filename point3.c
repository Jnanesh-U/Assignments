//3. Program to Access the Value of a Variable Using a Pointer
#include <stdio.h>
int main()
{
    int a = 50;
    int *p;
    p = &a;
    printf("Value of a = %d", *p);
    return 0;
} 
