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

    printf("\nRow-wise sum:\n");
    for (i = 0; i < r; ++i) {
        sum = 0;
        for (j = 0; j < c; ++j) {
            sum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}