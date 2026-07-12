#include <stdio.h>
#include <string.h>

// Global arrays aur variables taaki functions me easily use ho sake
char n[50][50]; // names ke liye string array
int m[50];      // marks array
int c = 0;      // student count

// Function to add student
void add() {
    printf("Enter name: ");
    scanf("%s", n[c]);
    printf("Enter marks: ");
    scanf("%d", &m[c]);
    c++;
    printf("Student added successfully.\n");
}

// Function to show all students
void show() {
    printf("\n--- All Students ---\n");
    for(int i = 0; i < c; i++) {
        printf("Name: %s | Marks: %d\n", n[i], m[i]);
    }
}

int main() {
    int a;

    while(1) {
        printf("\n--- Final Mini Project ---\n");
        printf("1. Add Student\n2. Show Students\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 1) {
            add(); // calling add function
        }
        else if(a == 2) {
            show(); // calling show function
        }
        else if(a == 3) {
            printf("Project Exited. Thank you!\n");
            break;
        }
        else {
            printf("Invalid choice.\n");
        }
    }
    
    return 0;
}
