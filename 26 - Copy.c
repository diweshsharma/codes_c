//WAP to add a matrix of order m x n from another matrix of the same order.
#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[100][100], b[100][100], sum[100][100];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Adding Two matrices
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the result
    printf("\nSum of two matrices: \n\n");

    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d   ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
