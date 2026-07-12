#include <stdio.h>

int main() {
    int x; 
    int y = 10000; 
    int z; 

    while(1) {
        printf("\n1. Balance\n2. Withdraw\n3. Deposit\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &x);

        if(x == 1) {
            printf("Balance: %d\n", y);
        } 
        else if(x == 2) {
            printf("Enter amount: ");
            scanf("%d", &z);
            if(z <= y) {
                y = y - z;
                printf("Done.\n");
            } else {
                printf("Not enough balance.\n");
            }
        } 
        else if(x == 3) {
            printf("Enter amount: ");
            scanf("%d", &z);
            y = y + z;
            printf("Done.\n");
        } 
        else if(x == 4) {
            break;
        } 
        else {
            printf("Invalid.\n");
        }
    }
    
    return 0;
}