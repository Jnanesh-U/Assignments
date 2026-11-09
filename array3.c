//3. Program to count even and odd number in an array.
#include <stdio.h>
int main()
{
    int a[5], i, even = 0, odd = 0;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Count of even numbers = %d\n", even);
    printf("Count of odd numbers = %d", odd);
    return 0;
}
