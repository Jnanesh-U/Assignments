//12. Program to find the sum of numbers entered using do while loop.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    do{
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
        sum = sum + n;
    } while (n != 0);
    printf("Sum = %d", sum);
    return 0;
}
