//8. Program to find the frequency of a given element in an array.
#include <stdio.h>
int main()
{
    int  i, key, count = 0;
    int a[5]={1,2,3,4,4};
    printf("Enter the element to find frequency: ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            count++;
        }
    }
    printf("Frequency of %d = %d", key, count);
    return 0;
}
