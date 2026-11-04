//17. Program to swap two numbers using function.
#include <stdio.h>
void swap(int a, int b) 	 // Takes arguments and does not return a value
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, b);
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2); 	 // Function calling
    return 0;
}
