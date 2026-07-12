#include <stdio.h>

int main()
{
    int x, y = 0, z = 1, a;

    printf("Enter a decimal number: ");
    scanf("%d", &x);

    while(x != 0)
    {
        a = x % 2;
        y = y + a * z;
        z = z * 10;
        x = x / 2;
    }

    printf("Binary number = %d", y);

    return 0;
}
