#include <stdio.h>

// Function to check if a year is a leap year of not
int isLeapYear(int Year) {
    return ((Year % 100 == 0) ? ((Year % 400 == 0) ? 1 : 0) : ((Year % 4 == 0) ? 1 : 0));
}

int main() {
    // Declaring variables
    int M1, D1, Y1, num_of_days, Day, AddedDay, AddedMonth, AddedYear, SubstractedDay, SubstractedMonth, SubstractedYear;

    // Initializing an array containing number of days of each month
    int MonthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Taking values of Day, Month, Year and number of days from the User
    printf("Enter MM/DD/YYYY: ");
    scanf("%d/%d/%d", &M1, &D1, &Y1);
    printf("Enter number of days to be added and substracted from the date: ");
    scanf("%d", &num_of_days);

    AddedDay = SubstractedDay = D1;
    AddedMonth = SubstractedMonth = M1;
    AddedYear = SubstractedYear = Y1;

    // Setting correct number of days for February according to the year
    MonthDays[2] = (isLeapYear(Y1)) ? 29 : 28;

    // Adding Days
    for (Day = 0; Day < num_of_days; Day++) {
        if ((AddedDay + 1) <= MonthDays[AddedMonth]) {
            AddedDay++;
        } else {
            if (AddedMonth < 12) {
                AddedDay = 1;
                AddedMonth++;
            } else {
                AddedDay = 1;
                AddedMonth = 1;
                AddedYear++;
                MonthDays[2] = (isLeapYear(AddedYear)) ? 29 : 28;
            };
        };
    };

    // Substracting Days
    for (Day = 0; Day < num_of_days; Day++) {
        if ((SubstractedDay - 1) >= 1) {
            SubstractedDay--;
        } else {
            if (SubstractedMonth > 1) {
                SubstractedMonth--;
                SubstractedDay = MonthDays[SubstractedMonth];
            } else {
                SubstractedMonth = 12;
                SubstractedDay = 31;
                SubstractedYear--;
                MonthDays[2] = (isLeapYear(SubstractedYear)) ? 29 : 28;
            };
        };
    };

    // Printing the dates after adding and substracting given number of days
    printf("\nDate after %d days = %d/%d/%d\n", num_of_days, AddedMonth, AddedDay, AddedYear);
    printf("Date before %d days = %d/%d/%d\n\n", num_of_days, SubstractedMonth, SubstractedDay, SubstractedYear);

    return 0;
}