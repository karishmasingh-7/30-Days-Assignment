#include <stdio.h>

int main() {
    int a; 
    
    printf("Enter age: ");
    scanf("%d", &a);
    
    if(a >= 18) {
        printf("Eligible for voting.\n");
    } else {
        printf("Not eligible for voting.\n");
    }
    
    return 0;
}