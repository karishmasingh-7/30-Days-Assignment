#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i;

    printf("Enter a string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }

    b[i] = '\0';

    printf("Copied string = %s", b);

    return 0;
}