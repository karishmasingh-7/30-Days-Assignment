#include <stdio.h>

struct E {
    int id;
    char n[50];
    int s;
};

int main() {
    struct E x[100];
    int c = 0; 
    int a;

    while(1) {
        printf("\n1. Add Employee\n2. View Employees\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter ID: ");
            scanf("%d", &x[c].id);
            printf("Enter name: ");
            scanf("%s", x[c].n);
            printf("Enter salary: ");
            scanf("%d", &x[c].s);
            c++;
        }
        else if(a == 2) {
            for(int i = 0; i < c; i++) {
                printf("ID: %d | Name: %s | Salary: %d\n", x[i].id, x[i].n, x[i].s);
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