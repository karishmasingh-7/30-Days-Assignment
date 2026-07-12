#include <stdio.h>

int main()
{
    int x, i, j, y = 1;

    printf("Enter number of rows: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", y);
            y++;
        }

        printf("\n");
    }

    return 0;
}