//WAP to read a file and display its contents on the console.
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], c;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Open file
    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 0;
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}
