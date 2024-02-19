//WAP to create a function that takes number and its power as argument and return value of the number raised to this power(without using math.h)
#include <stdio.h>

double power(double num, int pow);

int main() {
    double num, result;
    int pow;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Enter the power: ");
    scanf("%d", &pow);

    result = power(num, pow);

    printf("%.2lf raised to the power of %d is %.2lf", num, pow, result);

    return 0;
}

double power(double num, int pow) {
    double result = 1.0;

    if (pow < 0) {
        num = 1.0 / num;
        pow = -pow;
    }

    while (pow > 0) {
        if (pow % 2 == 1) {
            result *= num;
        }
        num *= num;
        pow /= 2;
    }

    return result;
}
  