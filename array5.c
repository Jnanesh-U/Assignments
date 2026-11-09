//5. Program to Reverse the Elements of an Array.
#include <stdio.h>
int main()
{
    int  i, j, temp;
    int a[5] = {1, 2, 3, 4, 5};
    for(i = 0, j = 4; i < j; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("Reversed array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
