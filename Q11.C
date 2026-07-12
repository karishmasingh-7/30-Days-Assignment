#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    while(y != 0)
    {
        z = y;
        y = x % y;
        x = z;
    }

    printf("GCD = %d", x);

    return 0;
}