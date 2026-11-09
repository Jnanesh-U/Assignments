//6. Program to calculate the average of array elements.
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};	
    float avg;
    int i,sum=0;
    for(i = 0; i < 5; i++)
    {
                sum = sum + a[i];
    }
    avg = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);
    return 0;
}
