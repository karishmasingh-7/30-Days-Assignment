#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, j, c = 0;

    printf("Enter a string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        c++;
    }

    for(i = c - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }

    b[j] = '\0';

    printf("Reversed string = %s", b);

    return 0;
}