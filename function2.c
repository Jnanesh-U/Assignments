//10. Program to Divide Two Numbers Using a Function
#include <stdio.h>
void divide(int a, int b){
    float result;
    result = (float)a / b;
    printf("Division = %.2f", result);     //no return value to the main function
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num2 != 0)    {
        divide(num1, num2);			//function calling
    }
    else    {
        printf("Division by zero is not possible");
    }
    return 0;
}
