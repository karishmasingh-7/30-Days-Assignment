#include <stdio.h>

int main() {
    char s[100];
    int count[256] = {0}; 
    int i = 0;

    printf("Enter string: ");
    scanf("%s", s);

    while(s[i] != '\0') {
        count[s[i]]++;
        i++;
    }

    printf("Frequency of characters:\n");
    for(i = 0; i < 256; i++) {
        if(count[i] > 0) {
            printf("%c : %d\n", i, count[i]);
        }
    }

    return 0;
}