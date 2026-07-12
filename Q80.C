#include <stdio.h>

int main() {
    int r, c, i, j, sum;
    int matrix[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nColumn-wise sum:\n");
    for (j = 0; j < c; ++j) {
        sum = 0;
        for (i = 0; i < r; ++i) {
            sum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}