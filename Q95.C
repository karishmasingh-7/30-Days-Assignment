#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50], word[50];
    int max_len = 0;
    
    printf("Enter a sentence: ");
    gets(str); 
    
    int i = 0, j = 0;
    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; 
            if(strlen(word) > max_len) {
                max_len = strlen(word);
                strcpy(longest, word);
            }
            j = 0; 
        }
        if(str[i] == '\0') break;
        i++;
    }
    
    printf("The longest word is: %s\n", longest);
    return 0;
}