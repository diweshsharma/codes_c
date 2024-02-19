// wap in c using switch case to calculate and display julian day fo the input date for the current
#include <stdio.h>

int main() {
    int day, month, year;
    int julianDay;

    printf("Enter the date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    switch (month) {
        case 1: // January
            break;
        case 2: // February
            day += 31;
            break;
        case 3: // March
            day += 59;
            break;
        case 4: // April
            day += 90;
            break;
        case 5: // May
            day += 120;
            break;
        case 6: // June
            day += 151;
            break;
        case 7: // July
            day += 181;
            break;
        case 8: // August
            day += 212;
            break;
        case 9: // September
            day += 243;
            break;
        case 10: // October
            day += 273;
            break;
        case 11: // November
            day += 304;
            break;
        case 12: // December
            day += 334;
            break;
        default:
            printf("Invalid month.\n");
            return 1;
    }

    julianDay = day + year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        if (month > 2) {
            julianDay += 1;
        }
    }

    printf("The Julian Day for %02d/%02d/%04d is %d.\n", day, month, year, julianDay);

    return 0;
}