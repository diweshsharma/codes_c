//WAP which makes use of a user defined function that returns the greatest of three numbers.
#include <stdio.h>

int greatest(int num1, int num2, int num3);

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = greatest(num1, num2, num3);

    printf("The greatest number is %d.", max);

    return 0;
}

int greatest(int num1, int num2, int num3) {
    int max;

    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    return max;
}
