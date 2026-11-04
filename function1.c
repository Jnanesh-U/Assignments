//9. Program to Add Two Numbers Using a Function
#include <stdio.h>
void add(int a, int b){
    int sum;
    sum = a + b;
    printf("Sum = %d", sum);              //no return value to the main function.
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    add(num1, num2);		//function calliing
    return 0;
}
