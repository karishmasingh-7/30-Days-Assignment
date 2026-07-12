#include <stdio.h>

int main() {
    int a[100];
    int n = 0; 
    int c, x, p;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while(1) {
        printf("\n--- Array Menu ---\n");
        printf("1. View Array\n2. Insert Element\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &c);

        if(c == 1) {
            printf("Array elements: ");
            for(int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        else if(c == 2) {
            printf("Enter position (0 to %d): ", n);
            scanf("%d", &p);
            printf("Enter value to insert: ");
            scanf("%d", &x);
            
            // Shift elements right
            for(int i = n; i > p; i--) {
                a[i] = a[i-1];
            }
            a[p] = x;
            n++; // size badha diya
            printf("Element inserted.\n");
        }
        else if(c == 3) {
            break;
        }
        else {
            printf("Wrong choice.\n");
        }
    }
    
    return 0;
}