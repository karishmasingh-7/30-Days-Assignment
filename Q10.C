#include <stdio.h>

int main()
{
    int x, y, i, j, z;

    printf("Enter starting number: ");
    scanf("%d", &x);

    printf("Enter ending number: ");
    scanf("%d", &y);

    for(i = x; i <= y; i++)
    {
        if(i <= 1)
            continue;

        z = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                z = 0;
                break;
            }
        }

        if(z == 1)
            printf("%d ", i);
    }

    return 0;
}
