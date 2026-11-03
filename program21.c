//21. Program to Find the Average of 10 Positive Integers Using continue Statement.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float avg;
    printf("Enter 10 positive integers:\n");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        if (n <= 0)
        {
            continue;
        }
        sum = sum + n;
    }
    avg = sum / 10.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);
    return 0;
}
