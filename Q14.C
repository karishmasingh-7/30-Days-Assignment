#include <stdio.h>

int main()
{
    int x, y = 0, z = 1, a, i;

    printf("Enter term number: ");
    scanf("%d", &x);

    for(i = 2; i <= x; i++)
    {
        a = y + z;
        y = z;
        z = a;
    }

    if(x == 1)
        printf("Fibonacci term = %d", y);
    else
        printf("Fibonacci term = %d", z);

    return 0;
}