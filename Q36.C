#include <stdio.h>

int main()
{
    int x, i, j, y;

    printf("Enter number of rows: ");
    scanf("%d", &x);

    for(i = 0; i < x; i++)
    {
        y = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%d ", y);
            y = y * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}