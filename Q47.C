#include <stdio.h>

int main()
{
    int a[100], b, c, d, i;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    printf("Enter array elements: ");

    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    c = a[0];
    d = a[0];

    for(i = 1; i < b; i++)
    {
        if(a[i] > c)
        {
            d = c;
            c = a[i];
        }
        else if(a[i] > d && a[i] != c)
        {
            d = a[i];
        }
    }

    printf("Second largest element = %d", d);

    return 0;
}