#include <stdio.h>

int main()
{
    int a[100], b, i, j, c;

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
            if(a[i] == a[j])
            {
                for(c = j; c < b - 1; c++)
                {
                    a[c] = a[c + 1];
                }

                b--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");

    for(i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}