//WAP in C to store the reverse of an input number in another variable, display it and check whether this input number is palindrome or not.
#include <stdio.h>

int main() {
    int n, reversedNumber = 0, remainder, originalNumber;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNumber = n;

    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    printf("The reverse of %d is %d.\n", originalNumber, reversedNumber);

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.", originalNumber);
    } else {
        printf("%d is not a palindrome.", originalNumber);
    }

    return 0;
}
