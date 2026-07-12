#include <stdio.h>

int main() {
    char s[100];
    int count[256] = {0};
    int i = 0, max = 0;
    char maxChar;

    printf("Enter string: ");
    scanf("%s", s);

    // har character ka count nikal rahe hain
    while(s[i] != '\0') {
        count[s[i]]++;
        i++;
    }

    // ab check karenge sabse zyada count kiska hai
    for(i = 0; i < 256; i++) {
        if(count[i] > max) {
            max = count[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character is: %c\n", maxChar);

    return 0;
}