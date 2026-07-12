#include <stdio.h>

int main()
{
    int x, y, i, a, z, b;

    printf("Enter starting and ending number: ");
    scanf("%d %d", &x, &y);

    for(i = x; i <= y; i++)
    {
        a = i;
        b = 0;

        while(a != 0)
        {
            z = a % 10;
            b = b + (z * z * z);
            a = a / 10;
        }

        if(b == i)
            printf("%d ", i);
    }

    return 0;
}