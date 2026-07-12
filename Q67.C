#include <stdio.h>

int main()
{
    char a[100], b;
    int i, c = 0;

    printf("Enter a string: ");
    gets(a);

    printf("Enter a character: ");
    scanf("%c", &b);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == b)
        {
            c++;
        }
    }

    printf("Frequency of character = %d", c);

    return 0;
}