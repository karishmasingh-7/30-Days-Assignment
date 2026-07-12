#include <stdio.h>

int main()
{
    int a[100], b, c, i, d = 0;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    printf("Enter array elements: ");

    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &c);

    for(i = 0; i < b; i++)
    {
        if(a[i] == c)
        {
            d = 1;
            break;
        }
    }

    if(d == 1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}