#include <stdio.h>

int main() {
    char s[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", s); 

    while(s[i] != '\0') {
        if(s[i] != ' ') {
            result[j] = s[i];
            j++;
        }
        i++;
    }
    result[j] = '\0'; 

    printf("String without spaces: %s\n", result);

    return 0;
}