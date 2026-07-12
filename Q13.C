#include <stdio.h>

int main()
{
    int x, y = 0, z = 1, i, a;

    printf("Enter number of terms: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++)
    {
        printf("%d ", y);
        a = y + z;
        y = z;
        z = a;
    }

    return 0;
}