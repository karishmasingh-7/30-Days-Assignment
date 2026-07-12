#include <stdio.h>

int main() {
    int a;
    int s = 0; 

    printf("Q1: 5 + 5 = ?\n");
    printf("1) 8   2) 10   3) 12\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &a);
    if(a == 2) {
        s++;
    }

    printf("\Q2: Capital of India?\n");
    printf("1) Delhi   2) Mumbai   3) Goa\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &a);
    if(a == 1) {
        s++;
    }

    printf("\nYour total score is: %d/2\n", s);
    
    return 0;
}