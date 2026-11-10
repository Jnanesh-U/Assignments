//5. Program to delete an element from specified position.
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5, pos = 3, i;
    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
