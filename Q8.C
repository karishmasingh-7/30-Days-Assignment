#include <stdio.h>

int main()
{
    int n, a, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(a == reverse)
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome");
    }

    return 0;
}