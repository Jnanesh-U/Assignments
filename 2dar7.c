//3. Program to insert an element at the beginning of an array.
#include <stdio.h>
int main()
{
    int a[6] = {10, 20, 30, 40, 50};
    int n = 5, element, i;
    element = 5;
    for(i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = element;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
