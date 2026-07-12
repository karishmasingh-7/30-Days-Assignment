#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;
    int matrix[100][100];

    printf("Enter the size of the square matrix (rows and columns): ");
    scanf("%d", &n);

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking for symmetry
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}