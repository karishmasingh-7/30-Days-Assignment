#include <stdio.h>

int main()
{
    int x, i, y = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    for(i = 1; i < x; i++)
    {
        if(x % i == 0)
            y = y + i;
    }

    if(y == x)
        printf("Perfect number");
    else
        printf("Not a perfect number");

    return 0;
}