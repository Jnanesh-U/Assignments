//11. Program to find square of a number using function.
#include <stdio.h>
void square(int n){
    int result;
    result = n * n;
    printf("Square = %d", result);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    square(num);		//function calling
    return 0;
}
