#include <stdio.h>

int main() {
    int x; 
    float h, d, t; 

    printf("Enter basic salary: ");
    scanf("%d", &x);

    h = x * 0.20;
    d = x * 0.50; 
    t = x + h + d;

    printf("Basic Salary: %d\n", x);
    printf("HRA: %.2f\n", h);
    printf("DA: %.2f\n", d);
    printf("Total Salary: %.2f\n", t);

    return 0;
}