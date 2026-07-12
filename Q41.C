#include <stdio.h>

int main()
{
    int a[100], b, i, c = 0, d = 0;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    printf("Enter array elements: ");

    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
            c++;
        else
            d++;
    }

    printf("Even elements = %d\n", c);
    printf("Odd elements = %d", d);

    return 0;
}