#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, j;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    for(i = 0; a[i] != '\0'; i++);

    for(j = 0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }

    a[i] = '\0';

    printf("Concatenated string = %s", a);

    return 0;
}