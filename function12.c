//20. Program to calculate simple interest using function.
#include <stdio.h>
float interest(float p, float r, float t) {	 // Takes arguments and returns a value
    float si;
    si = (p * r * t) / 100;
    return si;
}
int main(){
    float p, r, t, si;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);
    si = interest(p, r, t);  	// Function calling
    printf("Simple Interest = %.2f", si);
    return 0;
}
