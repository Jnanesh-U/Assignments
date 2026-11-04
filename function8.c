//16. Program to Multiply Two Numbers Using a Function.
#include <stdio.h>
void multiply(int a, int b){
    int result;
    result = a * b;
    printf("Multiplication = %d", result);			//no return value
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    multiply(num1, num2);			//function calling
    return 0;
}
