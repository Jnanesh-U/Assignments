//15. Program to find largest of three numbers using function.
#include <stdio.h>
void largest(int a, int b, int c){
    if (a > b && a >c) {
        printf("%d is the largest number", a);
    }
    else if (b > c){
        printf("%d is the largest number", b);
    }
    else{
        printf("%d is the largest number", c);
    }
}
int main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest(num1, num2, num3);			//function calling
    return 0;
}
