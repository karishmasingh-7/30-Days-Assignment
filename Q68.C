#include <stdio.h>

int main()
{
    char a[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != ' ')
        {
            a[j] = a[i];
            j++;
        }
    }

    a[j] = '\0';

    printf("String without spaces = %s", a);

    return 0;
}