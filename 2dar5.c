//1. Program to Count Positive, Negative and Zero Elements in an Array
#include <stdio.h>
int main()
{
    int a[8] = {10, -5, 0, 20, -8, 0, 15, -2};
    int i;
    int positive = 0, negative = 0, zero = 0;
    for(i = 0; i < 8; i++)
    {
        if(a[i] > 0)
        {
            positive++;
        }
        else if(a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zero);
    return 0;
}
