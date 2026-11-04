//18. Program to find area of a circle using function.
#include <stdio.h>
float area(int r) 	 // Takes arguments and returns a value
{
    float result;
    result = 3.14 * r * r;
    return result;
}
int main(){
    int radius;
    float a;
    printf("Enter radius: ");
    scanf("%d", &radius);
    a = area(radius); 	 // Function calling
    printf("Area of circle = %.2f", a);
    return 0;
}
