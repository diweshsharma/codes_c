//WAP to find the maximum and minimum value of an integer array of 10 numbers.
#include <stdio.h>

int main() {
    int arr[10], i, max, min;

    printf("Enter 10 integers: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}

