#include <stdio.h>

int main()
{
    char a[100];
    int i, j, b = 0, c = 0;

    printf("Enter a string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        b++;
    }

    for(i = 0, j = b - 1; i < j; i++, j--)
    {
        if(a[i] != a[j])
        {
            c = 1;
            break;
        }
    }

    if(c == 0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");

    return 0;
}