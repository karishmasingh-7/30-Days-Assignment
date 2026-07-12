#include <stdio.h>

int main() {
    int a, b, c, x;
    float y;

    printf("Enter marks for Sub1, Sub2, Sub3: ");
    scanf("%d %d %d", &a, &b, &c);

    x = a + b + c;
    y = x / 3.0;

    printf("\n--- Marksheet ---\n");
    printf("Sub1: %d\n", a);
    printf("Sub2: %d\n", b);
    printf("Sub3: %d\n", c);
    printf("Total Marks: %d\n", x);
    printf("Percentage: %.2f%%\n", y);

    if (y >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}