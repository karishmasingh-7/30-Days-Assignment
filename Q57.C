#include <stdio.h>

int main()
{
    char a[100];
    int i, b = 0;

    printf("Enter a string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        b++;
    }

    printf("Length of string = %d", b);

    return 0;
}