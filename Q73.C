#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix1[100][100], matrix2[100][100], diff[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("\nDifference of the two matrices is:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d   ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}