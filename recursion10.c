//10. Program to Find the Smallest Digit in a Number Using Recursion.
#include <stdio.h>
int smallest(int num, int min){
    if (num == 0){
        return min;
    }
    if (num % 10 < min){
        min = num % 10;
    }
    return smallest(num / 10, min);
}
int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = smallest(num, 9);
    printf("Smallest digit = %d", result);
    return 0;
}
