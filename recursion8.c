//8. Program to Print Numbers from 100 to 1 Using Recursion.
#include <stdio.h>
void printNumbers(int n){
    if (n < 1)    {
        return;
    }
    printf("%d ", n);
    printNumbers(n - 1);
}
int main(){
    printNumbers(100);
    return 0;
}
