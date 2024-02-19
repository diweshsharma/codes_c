
//WAP in C to check whether the input number is Prime or not using a 
while loop
#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (i <= n / 2) {
        if (n % i == 0) {
            printf("%d is not a prime number.", n);
            break;
        }
        ++i;
    }
    if (i > n / 2) {
        printf("%d is a prime number.", n);
    }
    return 0;
}
