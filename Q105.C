#include <stdio.h>

struct S {
    int r;
    char n[50];
    int m;
};

int main() {
    struct S x[100];
    int c = 0; 
    int a;

    while(1) {
        printf("\n1. Add Student\n2. View Students\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter roll no: ");
            scanf("%d", &x[c].r);
            printf("Enter name: ");
            scanf("%s", x[c].n);
            printf("Enter marks: ");
            scanf("%d", &x[c].m);
            c++;
        }
        else if(a == 2) {
            for(int i = 0; i < c; i++) {
                printf("Roll: %d | Name: %s | Marks: %d\n", x[i].r, x[i].n, x[i].m);
            }
        }
        else if(a == 3) {
            break;
        }
        else {
            printf("Invalid choice.\n");
        }
    }
    
    return 0;
}