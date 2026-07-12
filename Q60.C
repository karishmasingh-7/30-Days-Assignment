#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, c = 0;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    for(i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if(a[i] != b[i])
        {
            c = 1;
            break;
        }
    }

    if(c == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}