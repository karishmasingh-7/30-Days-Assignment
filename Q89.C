#include <stdio.h>

int main() {
    char s[100];
    int i, j, flag;

    printf("Enter string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) {
        flag = 0;
        for(j = 0; s[j] != '\0'; j++) {
            
            if(i != j && s[i] == s[j]) {
                flag = 1;
                break; 
            }
        }
        
        if(flag == 0) {
            printf("First non-repeating character is: %c\n", s[i]);
            break;
        }
    }

    if(flag == 1) {
        printf("No non-repeating character found\n");
    }

    return 0;
}