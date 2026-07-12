#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter string in lowercase: ");
    scanf("%s", s);

    while(s[i] != '\0') {
        
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32; 
        }
        i++;
    }

    printf("Uppercase string: %s\n", s);

    return 0;
}