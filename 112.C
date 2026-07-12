#include <stdio.h>
#include <string.h>

struct C {
    char n[50]; 
    char p[15]; 
};

int main() {
    struct C x[100];
    int c = 0;
    int a;

    while(1) {
        printf("\n1. Add Contact\n2. View Contacts\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter name: ");
            scanf("%s", x[c].n);
            printf("Enter phone: ");
            scanf("%s", x[c].p);
            c++;
            printf("Contact saved.\n");
        }
        else if(a == 2) {
            for(int i = 0; i < c; i++) {
                printf("Name: %s | Phone: %s\n", x[i].n, x[i].p);
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