//WAP to create a file and write data to this file.
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], data[1000];

    printf("Enter the filename to create: ");
    scanf("%s", filename);

    printf("Enter data to write to the file: ");
    scanf(" %[^\n]s", data);

    // Open file
    fptr = fopen(filename, "w");

    if (fptr == NULL) {
        printf("Cannot create file \n");
        return 0;
    }

    // Write data to file
    fprintf(fptr, "%s", data);

    printf("Data written to file successfully!\n");

    fclose(fptr);
    return 0;
}
