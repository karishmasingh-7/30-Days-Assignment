#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int i = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);
    while(s1[i] != '\0') {
        count1[s1[i]]++;
        i++;
    }

    i = 0;
    
    while(s2[i] != '\0') {
        count2[s2[i]]++;
        i++;
    }
    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1) {
        printf("Strings are anagrams\n");
    } else {
        printf("Strings are not anagrams\n");
    }

    return 0;
}