#include <stdio.h>
int main()
{
    int a[10], n, i;
    printf("enter the size");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}