#include <stdio.h>

struct I {
    int id;
    char n[50];
    int q; 
    float p; 
};

int main() {
    struct I x[100];
    int c = 0;
    int a;

    while(1) {
        printf("\n1. Add Item\n2. View Inventory\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter item ID: ");
            scanf("%d", &x[c].id);
            printf("Enter item name: ");
            scanf("%s", x[c].n);
            printf("Enter quantity: ");
            scanf("%d", &x[c].q);
            printf("Enter price: ");
            scanf("%f", &x[c].p);
            c++;
            printf("Item added.\n");
        }
        else if(a == 2) {
            for(int i = 0; i < c; i++) {
                printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n", x[i].id, x[i].n, x[i].q, x[i].p);
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