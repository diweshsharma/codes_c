//WAP to create a pointer to integer variable and apply integer addition and subtraction on this pointer. Through the program display the value of the integer variable, pointer to this integer variable and also the values of this pointer variable after applying operations.
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("The value of the integer variable is %d.\n", num);
    printf("The address of the integer variable is %p.\n", &num);
    printf("The value of the pointer variable is %p.\n", ptr);

    ptr = ptr + 5;
    printf("The value of the pointer variable after adding 5 is %p.\n", ptr);

    ptr = ptr - 2;
    printf("The value of the pointer variable after subtracting 2 is %p.\n", ptr);

    return 0;
}
