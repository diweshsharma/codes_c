//wap in c to enter ages of three persons and check who is youngest among them
#include <stdio.h>

int main() {
    int age1, age2, age3;

    printf("Enter the age of person 1: ");
    scanf("%d", &age1);

    printf("Enter the age of person 2: ");
    scanf("%d", &age2);

    printf("Enter the age of person 3: ");
    scanf("%d", &age3);

    if (age1 < age2 && age1 < age3) {
        printf("Person 1 is the youngest with an age of %d years.\n", age1);
    } else if (age2 < age1 && age2 < age3) {
        printf("Person 2 is the youngest with an age of %d years.\n", age2);
    } else if (age3 < age1 && age3 < age2) {
        printf("Person 3 is the youngest with an age of %d years.\n", age3);
    } else {
        printf("There is a tie. Two or more persons have the same youngest age.\n");
    }

    return 0;
}