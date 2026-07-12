#include <stdio.h>

int main()
{
    int x, i, y = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    for(i = 2; i <= x; i++)
    {
        while(x % i == 0)
        {
            y = i;
            x = x / i;
        }
    }

    printf("Largest prime factor = %d", y);

    return 0;
}