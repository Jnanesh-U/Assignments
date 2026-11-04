//14. Program to Check Whether a Number Is Positive, Negative or Zero Using a Function.
#include <stdio.h>
void check(int n){
    if (n > 0)    {
        printf("Positive number");
    }
    else if (n < 0)    {
        printf("Negative number");
    }
    else    {
        printf("Number is zero");
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);				//function calling
    return 0;
}

