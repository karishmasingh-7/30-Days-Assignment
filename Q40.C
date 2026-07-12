#include <stdio.h>

int main()
{
    int x[100], y, i, z;

    printf("Enter number of elements: ");
    scanf("%d", &y);

    printf("Enter array elements: ");

    for(i = 0; i < y; i++)
    {
        scanf("%d", &x[i]);
    }

    z = x[0];

    for(i = 1; i < y; i++)
    {
        if(x[i] < z)
            z = x[i];
    }

    printf("Minimum element = %d", z);

    return 0;
}