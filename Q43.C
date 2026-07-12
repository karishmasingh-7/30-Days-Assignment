#include <stdio.h>

int main()
{
    int a[100], b, i;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    printf("Enter array elements: ");

    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Reversed array: ");

    for(i = b - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}