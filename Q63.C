#include <stdio.h>

int main()
{
    char a[100];
    int i, b = 0, c = 0;

    printf("Enter a string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if((a[i] >= 'A' && a[i] <= 'Z') ||
           (a[i] >= 'a' && a[i] <= 'z'))
        {
            if(a[i] == 'a' || a[i] == 'e' ||
               a[i] == 'i' || a[i] == 'o' ||
               a[i] == 'u' || a[i] == 'A' ||
               a[i] == 'E' || a[i] == 'I' ||
               a[i] == 'O' || a[i] == 'U')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
    }

    printf("Vowels = %d\n", b);
    printf("Consonants = %d", c);

    return 0;
}