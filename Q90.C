#include <stdio.h>

int main() {
    char s[100];
    int i, j, flag = 0;

    printf("Enter string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) {
        for(j = i + 1; s[j] != '\0'; j++) {
            // agar same character aage mil gaya
            if(s[i] == s[j]) {
                printf("First repeating character is: %c\n", s[i]);
                flag = 1;
                break;
            }
        }
        // ek baar mil gaya to bahar aa jao
        if(flag == 1) {
            break;
        }
    }

    if(flag == 0) {
        printf("No repeating character found\n");
    }

    return 0;
}