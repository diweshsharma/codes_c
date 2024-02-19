//WAP to multiply to matrices of order m x n
#include <stdio.h>

int main() {
    int m, n, i, j, k;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplying matrices A and B and storing result in C
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            C[i][j] = 0;
            for (k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
