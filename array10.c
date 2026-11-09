//10: Program to check whether an array is a palindrome.
#include <stdio.h>
int main()
{
    int  i, flag = 1;
    int a[5]={1,2,3,2,1}
    printf("Enter array elements:\n");
    for(i = 0; i < 5 / 2; i++)
    {
        if(a[i] != a[5 - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Array is a palindrome");
    }
    else
    {
        printf("Array is not a palindrome");
    }

    return 0;
}
