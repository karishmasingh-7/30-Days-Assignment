#include <stdio.h>

int main()
{
    int a, b, c;
    int *x, *y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = &a;
    y = &b;

    c = *x;
    *x = *y;
    *y = c;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}