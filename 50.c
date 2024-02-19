//WAP to count the number of characters and words in the given file
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], c;
    int characters = 0, words = 0;

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
        characters++;
        if (c == ' ' || c == '\n' || c == '\t') {
            words++;
        }
        c = fgetc(fptr);
    }

    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words + 1);

    fclose(fptr);
    return 0;
}
