//WAP to create a function that takes as input an array of marks of a student in 10 subjects and returns his percentage.
#include <stdio.h>

float percentage(int marks[]);

int main() {
    int marks[10], i;
    float perc;

    printf("Enter the marks of the student in 10 subjects:\n");
    for (i = 0; i < 10; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    perc = percentage(marks);

    printf("The percentage of the student is %.2f%%.", perc);

    return 0;
}

float percentage(int marks[]) {
    int i, total = 0;
    float perc;

    for (i = 0; i < 10; i++) {
        total += marks[i];
    }

    perc = (float) total / 10.0;

    return perc;
}
