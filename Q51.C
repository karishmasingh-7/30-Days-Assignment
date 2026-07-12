#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, x, y, z;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &x, &y);

    printf("Enter columns of second matrix: ");
    scanf("%d", &z);

    printf("Enter first matrix:\n");

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < y; i++)
    {
        for(j = 0; j < z; j++)
            scanf("%d", &b[i][j]);
    }

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < z; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < y; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }

    printf("Multiplication of matrices:\n");

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < z; j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}