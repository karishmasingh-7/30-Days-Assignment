#include <stdio.h>

int main()
{
    int a, b;
    int *x, *y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = &a;
    y = &b;

    if(*x > *y)
        printf("Maximum = %d", *x);
    else
        printf("Maximum = %d", *y);

    return 0;
}