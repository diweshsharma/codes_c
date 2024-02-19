//WAP to delete an element from a 1D array
#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!");
    } else {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("The array after deletion is: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
