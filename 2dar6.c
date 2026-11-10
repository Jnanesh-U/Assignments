//2. Program to Copy Elements from One Array to Another
 #include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    printf("Original Array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nCopied Array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
