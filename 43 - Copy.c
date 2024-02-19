//WAP to create a recursive function to implement the Ackerman function.
#include <stdio.h>

int ackermann(int m, int n);

int main() {
    int m, n;

    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);

    printf("The value of the Ackermann function for m = %d and n = %d is %d.", m, n, ackermann(m, n));

    return 0;
}

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

