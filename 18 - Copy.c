//WAP in C to check whether the input number is Armstrong number or not.
#include <stdio.h>
#include <math.h>

int main() {
    int n, originalNumber, remainder, result = 0, nDigits = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNumber = n;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++nDigits;
    }

    originalNumber = n;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, nDigits);
        originalNumber /= 10;
    }

    if (result == n) {
        printf("%d is an Armstrong number.", n);
    } else {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}
