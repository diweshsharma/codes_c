//WAP to find transpose of a matrix.
#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[10][10], transpose[10][10];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Finding the transpose of the matrix
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    // Displaying the transpose of the matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
