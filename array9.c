//9. Program to find the position of an element in an array.
#include <stdio.h>
int main()
{
    int  i, key, found = 0;
    int a[5]={1,8,3,4,7};
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Element not found");
    }
    return 0;
}
