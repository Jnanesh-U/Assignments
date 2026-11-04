//19. Program to generate the multiplication table using function.
#include <stdio.h>
void table(int n)  	// Takes arguments and does not return a value
{
    int i;
    for (i = 1; i <= 10; i++)    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    table(num); 		 // Function calling
    return 0;
}
