#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string (e.g., aaabbc): ");
    scanf("%s", str);
    
    int n = strlen(str);
    printf("Compressed string: ");
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
    return 0;
}