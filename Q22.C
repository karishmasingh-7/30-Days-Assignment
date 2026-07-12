#include <stdio.h>

int main()
{
    int x, y = 0, z = 1, a;

    printf("Enter a binary number: ");
    scanf("%d", &x);

    while(x != 0)
    {
        a = x % 10;
        y = y + a * z;
        z = z * 2;
        x = x / 10;
    }

    printf("Decimal number = %d", y);

    return 0;
}