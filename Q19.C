#include <stdio.h>

int main()
{
    int x, i;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Factors are: ");

    for(i = 1; i <= x; i++)
    {
        if(x % i == 0)
            printf("%d ", i);
    }

    return 0;
}