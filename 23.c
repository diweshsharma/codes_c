//WAP to Insert an element in 1D array at position entered by user.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, x;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element to be inserted: ");
    scanf("%d", &x);

    // Shift elements to the right
    for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element
    arr[pos - 1] = x;

    // Increase the size of the array
    n++;

    printf("The array after insertion is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
