#include <stdio.h>

int main()
{
    int a, b, c;
    int *x, *y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = &a;
    y = &b;

    c = *x + *y;

    printf("Sum = %d", c);

    return 0;
}