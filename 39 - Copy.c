//WAP to return the greatest of 10 numbers in an array using a function.
#include <stdio.h>

int greatest(int a[]);

int main() {
    int a[10], i, max;

    printf("Enter ten values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    max = greatest(a);

    printf("The greatest of ten numbers is %d.", max);

    return 0;
}

int greatest(int a[]) {
    int i, max;

    max = a[0];
    for (i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}
