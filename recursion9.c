//9. Program to Find the Largest Digit in a Number Using Recursion.
#include <stdio.h>
int largest(int num, int max){
    if (num == 0)    {
        return max;
    }
    if (num % 10 > max)    {
        max = num % 10;
    }
    return largest(num / 10, max);
}
int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = largest(num, 0);
    printf("Largest digit = %d", result);
    return 0;
}
