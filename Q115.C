#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int a, x;

    while(1) {
        printf("\n--- String Operations ---\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter a string: ");
            scanf("%s", s1);
            x = strlen(s1);
            printf("Length is: %d\n", x);
        }
        else if(a == 2) {
            printf("Enter a string: ");
            scanf("%s", s1);
            strcpy(s2, s1);
            printf("Copied string is: %s\n", s2);
        }
        else if(a == 3) {
            printf("Enter first string: ");
            scanf("%s", s1);
            printf("Enter second string: ");
            scanf("%s", s2);
            strcat(s1, s2);
            printf("Combined string is: %s\n", s1);
        }
        else if(a == 4) {
            break;
        }
        else {
            printf("Wrong choice.\n");
        }
    }
    
    return 0;
}