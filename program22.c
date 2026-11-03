//22. Program to Find Whether a Number Is Even or Odd Using goto Statement
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        goto even;
    else
        goto odd;
even:
    printf("%d is an Even number", n);
    goto end;
odd:
    printf("%d is an Odd number", n);
end:
    return 0;
}
