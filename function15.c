//23. Program to calculate a factorial of the using function.
#include <stdio.h>
int factorial(int n) {	 // Takes arguments and returns a value
    int fact = 1, i;
    for (i = 1; i <= n; i++)    {
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = factorial(num); 	 // Function calling
    printf("Factorial = %d", result);
    return 0;
}
