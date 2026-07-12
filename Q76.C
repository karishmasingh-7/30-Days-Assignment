// Q77: Write a program to Multiply matrices.[cite: 1]
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[100][100], b[100][100], result[100][100];

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2) {
        printf("Error! Column of first matrix not equal to row of second.\n");
        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            for (k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of the matrices:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d   ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}