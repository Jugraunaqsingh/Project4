//calender problem input: 19 10 2022 output: wednesday
#include <stdio.h>
int main() {
    int month, year, date, s = 0, i;
    scanf("%d %d %d", &date, &month, &year);
    char week[][12] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday","saturday" };
    int m[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        m[1] = 29;
    for (i = 0; i < month - 1; i++)
        s = s + m[i];
    s = s + (date + year + (year / 4) - 2);
    s = s % 7;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        s--;
    if (s == -1)
        s = 6;
    printf("%s", week[s]);
    return 0;
}