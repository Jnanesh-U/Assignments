//2. Program to Check Whether a Number Is Palindrome or Not using recursion.
#include <stdio.h>
int reverse(int num, int rev){
    if (num == 0) {
        return rev;
    }
    rev = rev * 10 + num % 10;
    return reverse(num / 10, rev);
}
int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = reverse(num, 0);
    printf("Reversed number = %d", result);
     if (num == result){
        printf("\n%d is a Palindrome number", num);
    }
    else{
        printf("\n%d is not a Palindrome number", num);
    }
    return 0;
}
