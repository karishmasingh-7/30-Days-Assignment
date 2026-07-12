#include <stdio.h>

int main()
{
    int x, y, z, a = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    y = x;

    while(x != 0)
    {
        z = x % 10;
        a = a + (z * z * z);
        x = x / 10;
    }

    if(a == y)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}