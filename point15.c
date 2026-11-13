//25. Program to reverse an array using two pointers (one pointing to the beginning and another to the end).
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int *q = a + 4;
    int temp;
    while(p < q)
    {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    printf("Reversed array: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
