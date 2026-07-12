#include <stdio.h>

int main() {
    char s[100];
    int i, len = 0;
    int flag = 1; 

    printf("Enter string: ");
    scanf("%s", s);

    while(s[len] != '\0') {
        len++;
    }
    for(i = 0; i < len / 2; i++) {
        if(s[i] != s[len - 1 - i]) {
            flag = 0; 
            break;
        }
    }

    if(flag == 1) {
        printf("Palindrome string\n");
    } else {
        printf("Not a palindrome string\n");
    }

    return 0;
}