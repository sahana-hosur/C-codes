#include <stdio.h>
int main()
{
    int a[10], n, i, b[10];
    printf("enter the size");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of 2 array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {

        printf("%d\t", a[i] + b[i]);
    }

    return 0;
}