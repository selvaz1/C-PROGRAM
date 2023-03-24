#include <stdio.h>

int is_leap_year(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int next_leap_year(int year)
{
    while (1) {
        year++;
        if (is_leap_year(year)) {
            return year;
        }
    }
}
int prev_leap_year(int year)
{
 
    while (1) {
        year--;
        if (is_leap_year(year)) {
            return year;
        }
    }
}

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (is_leap_year(year)) {
        printf("%d is a leap year.\n", year);
        printf("The next leap year is %d.\n", next_leap_year(year));
    } else {
        printf("%d is not a leap year.\n", year);
        printf("The previous leap year is %d.\n", prev_leap_year(year));
    }

    return 0;
}

