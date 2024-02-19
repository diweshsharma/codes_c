//WAP to copy one string to another string (using string.h).
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    strcpy(str2, str1);

    printf("The first string is: %s\n", str1);
    printf("The second string is: %s\n", str2);

    return 0;
}
