#include <stdio.h>

int main() {
    int t = 50; 
    int a, x;

    while(1) {
        printf("\n1. View Available Tickets\n2. Book Ticket\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Available tickets: %d\n", t);
        }
        else if(a == 2) {
            printf("How many tickets want to book: ");
            scanf("%d", &x);
            
            if(x <= t) {
                t = t - x;
                printf("%d tickets booked successfully!\n", x);
            } else {
                printf("Not enough tickets available.\n");
            }
        }
        else if(a == 3) {
            break;
        }
        else {
            printf("Wrong choice.\n");
        }
    }
    
    return 0;
}