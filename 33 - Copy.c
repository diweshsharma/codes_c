//WAP to reverse input string (using string.h).
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    strrev(str);

    printf("The reversed string is: %s", str);

    return 0;
}
