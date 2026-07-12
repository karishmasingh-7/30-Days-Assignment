#include <stdio.h>

int rev(int x, int y)
{
    if(x == 0)
        return y;
    else
        return rev(x / 10, y * 10 + x % 10);
}

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Reverse number = %d", rev(x, 0));

    return 0;
}