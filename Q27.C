#include <stdio.h>

int sum(int x)
{
    if(x == 0)
        return 0;
    else
        return (x % 10) + sum(x / 10);
}

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Sum of digits = %d", sum(x));

    return 0;
}