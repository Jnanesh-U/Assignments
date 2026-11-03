//4.Program to Convert Decimal to Binary Using Recursion.
#include <stdio.h>
int binary(int num){
    if (num == 0)    {
        return 0;
    }
    binary(num / 2);
    printf("%d", num % 2);
    return 0;
}
int main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary number: ");
    if (num == 0)
        printf("0");
    else
        binary(num);
    return 0;
}
