#include <stdio.h>

int main()
{
    int x, y, z, i, a, b = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    y = x;

    while(x != 0)
    {
        z = x % 10;
        a = 1;

        for(i = 1; i <= z; i++)
        {
            a = a * i;
        }

        b = b + a;
        x = x / 10;
    }

    if(b == y)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}