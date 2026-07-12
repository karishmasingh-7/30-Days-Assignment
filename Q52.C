#include <stdio.h>

int main()
{
    int a[10][10], b[10][10];
    int i, j, x, y;

    printf("Enter rows and columns: ");
    scanf("%d %d", &x, &y);

    printf("Enter matrix:\n");

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose matrix:\n");

    for(i = 0; i < y; i++)
    {
        for(j = 0; j < x; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    return 0;
}