#include <stdio.h>

int main()
{
    int a[100], b[100], c, i;

    printf("Enter number of elements: ");
    scanf("%d", &c);

    printf("Enter array elements: ");

    for(i = 0; i < c; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < c; i++)
    {
        b[i] = a[i];
    }

    printf("Copied array: ");

    for(i = 0; i < c; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}