#include <stdio.h>

int main()
{
    int a[10][10], b, i, j, c = 1;

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
        for(j = 0; j < b; j++)
        {
            if((i == j && a[i][j] != 1) ||
               (i != j && a[i][j] != 0))
            {
                c = 0;
                break;
            }
        }
    }

    if(c == 1)
        printf("Matrix is an identity matrix");
    else
        printf("Matrix is not an identity matrix");

    return 0;
}