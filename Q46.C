#include <stdio.h>

int main()
{
    int a[100], b, c, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    printf("Enter array elements: ");

    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < b; i++)
    {
        for(j = i + 1; j < b; j++)
        {
            if(a[i] < a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    printf("Descending order: ");

    for(i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}