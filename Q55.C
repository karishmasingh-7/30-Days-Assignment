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
            if(a[i][j] != a[j][i])
            {
                c = 0;
                break;
            }
        }
    }

    if(c == 1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}