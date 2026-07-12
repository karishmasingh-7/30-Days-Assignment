#include <stdio.h>

struct B {
    int acc;
    char n[50];
    int bal;
};

int main() {
    struct B x;
    int c, a;

    printf("--- Create Account ---\n");
    printf("Enter Acc No: ");
    scanf("%d", &x.acc);
    printf("Enter Name: ");
    scanf("%s", x.n);
    x.bal = 0; // Starting balance zero

    while(1) {
        printf("\n1. Details\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &c);

        if(c == 1) {
            printf("Acc: %d | Name: %s | Balance: %d\n", x.acc, x.n, x.bal);
        }
        else if(c == 2) {
            printf("Amount to deposit: ");
            scanf("%d", &a);
            x.bal = x.bal + a;
            printf("Done.\n");
        }
        else if(c == 3) {
            printf("Amount to withdraw: ");
            scanf("%d", &a);
            if(a <= x.bal) {
                x.bal = x.bal - a;
                printf("Done.\n");
            } else {
                printf("Less balance.\n");
            }
        }
        else if(c == 4) {
            break;
        }
        else {
            printf("Wrong choice.\n");
        }
    }
    return 0;
}