//WAP to create a user defined data type named date using Union
#include <stdio.h>

union Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    union Student s;

    printf("Enter the name of the student: ");
    scanf("%s", s.name);

    printf("Enter the roll number of the student: ");
    scanf("%d", &s.roll_number);

    printf("Enter the marks of the student: ");
    scanf("%f", &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_number);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
