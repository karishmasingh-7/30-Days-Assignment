#include <stdio.h>
#include <string.h>

int main() {
    int r[50];       // array for roll numbers
    char n[50][50];  // array of strings for names
    int m[50];       // array for marks
    int c = 0;       // count of students
    int a;           // choice

    while(1) {
        printf("\n1. Add Student\n2. View Records\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter roll no: ");
            scanf("%d", &r[c]);
            printf("Enter name: ");
            scanf("%s", n[c]);
            printf("Enter marks: ");
            scanf("%d", &m[c]);
            c++;
            printf("Record added.\n");
        }
        else if(a == 2) {
            printf("\n--- Student Records ---\n");
            for(int i = 0; i < c; i++) {
                printf("Roll No: %d | Name: %s | Marks: %d\n", r[i], n[i], m[i]);
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