#include <stdio.h>

int main()
{
    int x[100], y, i, z = 0;

    printf("Enter number of elements: ");
    scanf("%d", &y);

    printf("Enter array elements: ");

    for(i = 0; i < y; i++)
    {
        scanf("%d", &x[i]);
        z = z + x[i];
    }

    printf("Sum of array elements = %d", z);

    return 0;
}