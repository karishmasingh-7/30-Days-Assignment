#include <stdio.h>

struct E {
    int id;
    char n[50];
    int s;     
};

int main() {
    struct E x[50];
    int c = 0; 
    int a;

    while(1) {
        printf("\n--- Mini Employee System ---\n");
        printf("1. Add Employee\n2. Show Employees\n3. Exit\n");
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
            printf("Employee added.\n");
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
            printf("Invalid choice.\n");
        }
    }
    
    return 0;
}