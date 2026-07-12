#include <stdio.h>

int main()
{
    char a[100];
    int i, b = 0;

    printf("Enter a string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if((i == 0 && a[i] != ' ') ||
           (a[i] != ' ' && a[i - 1] == ' '))
        {
            b++;
        }
    }

    printf("Number of words = %d", b);

    return 0;
}