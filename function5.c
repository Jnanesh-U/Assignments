//13.Program to find largest of two number using function.
#include <stdio.h>
void largest(int a, int b){
    if (a > b)    {
        printf("%d is the largest number", a);
    }
    else{
        printf("%d is the largest number", b);
    }
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    largest(num1, num2);			//function calling
    return 0;
}