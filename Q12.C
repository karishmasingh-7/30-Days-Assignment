#include <stdio.h>

int main()
{
    int x, y, z, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    z = (x > y) ? x : y;

    for(i = z; ; i++)
    {
        if(i % x == 0 && i % y == 0)
        {
            printf("LCM = %d", i);
            break;
        }
    }

    return 0;
}