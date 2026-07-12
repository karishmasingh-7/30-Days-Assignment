#include <stdio.h>
int main() {
    char s[100];
    int len = 0, i;
    char temp;

    printf("Enter string: ");
    scanf("%s", s);
    while(s[len] != '\0') {
        len++;
    }
    for(i = 0; i < len / 2; i++) {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", s);

    return 0;
}