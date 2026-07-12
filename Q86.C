#include <stdio.h>

int main() {
    char s[200];
    int i = 0, words = 1; 

    printf("Enter a sentence: ");
    scanf("%[^\n]", s); 

    while(s[i] != '\0') {
        
        if(s[i] == ' ') {
            words++;
        }
        i++;
    }

    printf("Total words: %d\n", words);

    return 0;
}