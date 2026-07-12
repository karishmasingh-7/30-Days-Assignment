#include <stdio.h>

int main()
{
    int x, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &x);

    for(i = x; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}