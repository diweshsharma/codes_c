//WAP in C to find the sum of the series 1+2+4+7+11+………..up to n terms using for loop
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int a[30];
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    a[0] = 1;
    for (i = 1; i < n; i++) {
        a[i] = a[i - 1] + i + 1;
    }
    printf("The series is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
