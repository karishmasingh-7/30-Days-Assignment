#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, x, y;

    printf("Enter rows and columns: ");
    scanf("%d %d", &x, &y);

    printf("Enter first matrix:\n");

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Subtraction of matrices:\n");

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}