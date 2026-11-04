//25. Program to check whether a number is even or odd using function.
#include <stdio.h>
void check(int n)
{
    if (n % 2 == 0)    {
        printf("%d is an even number", n);
    }
    else    {
        printf("%d is an odd number", n);
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}
