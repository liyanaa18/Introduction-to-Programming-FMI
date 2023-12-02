#include <iostream>
using namespace std;

int main() {

    int date;
    int month;
    int year;
    cin >> date >> month >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
    {
        date = 1;
        month += 1;
    }

    if (month == 12)
    {
        date = 1;
        month = 1;
        year += 1;
    }

    if (year % 4 == 0 && month == 2 && date == 29)
    {
        date = 1;
    }

    if (year % 4 == 0 && month == 2 && date == 28)
    {
        date = 29;
    }

    if (month == 2 && date == 28)
    {
        date = 1;
        month += 1;
    }

    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        date = 1;
        month += 1;
    }
    
    cout << date << " " << month << " " << year;

    return 0;
}