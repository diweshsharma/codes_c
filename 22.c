//WAP to Search an element in 1D array and display its position.
#include <stdio.h>

int main() {
    int arr[10], n, i,key, position = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i + 1;
            break;
        }
    }

    if (position == -1) {
        printf("Element not found in the array.");
    } else {
        printf("Element found at position %d.", position);
    }

    return 0;
}
