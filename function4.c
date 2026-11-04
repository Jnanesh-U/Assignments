//12. Program to find cube of a number using function.
#include <stdio.h>
void cube(int n){
    int result;
    result = n * n * n;
    printf("Cube = %d", result);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    cube(num);			//function calling
    return 0;
}

