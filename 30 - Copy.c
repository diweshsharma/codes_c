//WAP to find length of the string (using string.h).
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("The length of the string is %d.", len);

    return 0;
}
