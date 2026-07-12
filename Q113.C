#include <stdio.h>

int main() {
    int a;
    float x, y, z;

    while(1) {
        printf("\n--- Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

        if(a == 5) {
            break;
        }

        if(a >= 1 && a <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
        }

        if(a == 1) {
            z = x + y;
            printf("Result: %.2f\n", z);
        }
        else if(a == 2) {
            z = x - y;
            printf("Result: %.2f\n", z);
        }
        else if(a == 3) {
            z = x * y;
            printf("Result: %.2f\n", z);
        }
        else if(a == 4) {
            if(y != 0) {
                z = x / y;
                printf("Result: %.2f\n", z);
            } else {
                printf("Cannot divide by zero.\n");
            }
        }
        else {
            printf("Wrong choice.\n");
        }
    }
    
    return 0;
}