//6. Program to find grade of a students when marks of four students are given using else if chain.
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, total;
    float avg;
    printf("Enter marks of four subjects: ");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    total = m1 + m2 + m3 + m4;
    avg = total / 4.0;
    if (avg >= 90)
        printf("Grade A");
    else if (avg >= 80)
        printf("Grade B");
    else if (avg >= 70)
        printf("Grade C");
    else if (avg >= 60)
        printf("Grade D");
    else if (avg >= 35)
        printf("Grade E");
   else
        printf("Fail");
    return 0;
}
