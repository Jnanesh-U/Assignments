//21. Program to check whether a number is palindrome or not.
#include <stdio.h>
void palindrome(int n) { 	// Takes arguments and does not return a value
    int original, rev = 0, rem;
    original = n;
    while (n > 0)    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (original == rev)    {
        printf("Palindrome number");
    }
    else    {
        printf("Not a palindrome number");
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    palindrome(num); 	 // Function calling
    return 0;
}
