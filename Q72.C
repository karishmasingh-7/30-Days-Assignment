#include <stdio.h>

int main()
{
    int a[100], b, i;
    int *x;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    printf("Enter array elements: ");

    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    x = a;

    printf("Array elements are: ");

    for(i = 0; i < b; i++)
    {
        printf("%d ", *(x + i));
    }

    return 0;
}