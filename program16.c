//16.Program to Multiply Two Positive Numbers Without Using * Operator (For Loop)
#include <stdio.h>
int main()
{
    int a, b, i, result = 0;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= b; i++)
    {
        result = result + a;
    }
    printf("Multiplication = %d", result);
    return 0;
}
