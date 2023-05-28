#include <stdio.h>
#include <stdbool.h>
int weekday(int day, int month, int year) {
    if (month < 3)
        year = year - 1;

    return ((day + (int)(2.6 * (float)((month + 9) % 12 + 1) - 0.2) + year % 100 + (int)(year % 100 / 4) + (int)(year / 400) - 2 * (int)(year / 100) - 1) % 7 + 7) % 7 + 1;
}
int main() {
    printf("%d", weekday(20, 04, 1998));

    return 0;
}