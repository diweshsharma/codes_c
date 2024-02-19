//WAP to copy contents of this file to another file.
#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    char filename1[100], filename2[100], c;

    printf("Enter the filename to copy from: ");
    scanf("%s", filename1);

    printf("Enter the filename to copy to: ");
    scanf("%s", filename2);

    // Open source file
    fptr1 = fopen(filename1, "r");
    if (fptr1 == NULL) {
        printf("Cannot open file %s \n", filename1);
        return 0;
    }

    // Open target file
    fptr2 = fopen(filename2, "w");
    if (fptr2 == NULL) {
        printf("Cannot create file %s \n", filename2);
        return 0;
    }

    // Copy contents character by character
    c = fgetc(fptr1);
    while (c != EOF) {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("Contents copied from %s to %s successfully!\n", filename1, filename2);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
