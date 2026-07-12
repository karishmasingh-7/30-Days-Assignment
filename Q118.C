#include <stdio.h>
#include <string.h>

struct L {
    int id;
    char b[50]; // book name
    char a[50]; // author name
};

int main() {
    struct L x[50];
    int c = 0; 
    int y;

    while(1) {
        printf("\n--- Mini Library ---\n");
        printf("1. Add Book\n2. Show Books\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &y);

        if(y == 1) {
            printf("Enter book ID: ");
            scanf("%d", &x[c].id);
            printf("Enter book name: ");
            scanf("%s", x[c].b);
            printf("Enter author: ");
            scanf("%s", x[c].a);
            c++;
            printf("Book added.\n");
        }
        else if(y == 2) {
            for(int i = 0; i < c; i++) {
                printf("ID: %d | Book: %s | Author: %s\n", x[i].id, x[i].b, x[i].a);
            }
        }
        else if(y == 3) {
            break;
        }
        else {
            printf("Invalid choice.\n");
        }
    }
    
    return 0;
}