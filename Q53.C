#include <stdio.h>

int main()
{
    int a[10][10], b, i, j, c = 0;

    printf("Enter size of matrix: ");
    scanf("%d", &b);

    printf("Enter matrix elements:\n");

    for(i = 0; i < b; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < b; i++)
    {
        c = c + a[i][i];
    }

    printf("Sum of main diagonal elements = %d", c);

    return 0;
}