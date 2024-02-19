//WAP to print sum of all diagonal elements of a matrix
#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    int a[10][10];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    if (m != n) {
        printf("The matrix is not a square matrix.");
    } else {
        for (i = 0; i < m; ++i) {
            sum += a[i][i];
        }
        printf("The sum of diagonal elements of the matrix is %d.", sum);
    }

    return 0;
}
