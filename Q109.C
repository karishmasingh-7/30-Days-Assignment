#include <stdio.h>

struct B {
    int id;
    char n[50];
};

int main() {
    struct B x[100];
    int c = 0; 
    int a;

    while(1) {
        printf("\n1. Add Book\n2. View Books\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter book ID: ");
            scanf("%d", &x[c].id);
            printf("Enter book name: ");
            scanf("%s", x[c].n);
            c++;
        }
        else if(a == 2) {
            for(int i = 0; i < c; i++) {
                printf("ID: %d | Book Name: %s\n", x[i].id, x[i].n);
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