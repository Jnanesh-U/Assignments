//22. Program to reverse a number using function.
#include <stdio.h>
void reverse(int n) {	 // Takes arguments and does not return a value
    int rem, rev = 0;
    while (n > 0)    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reverse = %d", rev);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverse(num); 	 // Function calling
    return 0;
}
