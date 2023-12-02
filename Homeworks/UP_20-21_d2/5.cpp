/**
*  
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Liyana Asenova
* @idnumber 62570
* @task 5
* @compiler VC
*
*/

#include <iostream>
#include <iomanip>
using namespace std;

    //date, month, year, hour, minutes, seconds
    // 1 minute = 60 seconds;
    // 1 hour = 60 * 60;
    // 1 day = 24 * 60 * 60;
    // 1 year = 365 * 24 * 60 * 60

int main()
{
    unsigned int seconds = 0;
    cin >> seconds;

    const int num = 24 * 60 * 60;
    int time = seconds % num;

    int days = seconds / num;
    int year = 1970;

    while (days >= 365)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days -= 366;
        }
        else
        {
            days -= 365;
        }
        year++;
    }

    int hour = time / 3600;
    int minutes = (time % 3600) / 60;
    int secondss = (time % 3600) % 60;

    if ((hour < 10 && hour >= 0) && (minutes > 10) && (secondss > 10)) 
    {
        cout << year << " " << "0" << hour << ":" << minutes << ":" << secondss;
    }
    else if ((hour < 10 && hour >= 0) && (minutes < 10 && minutes >= 0) && (secondss > 10))
    {
        cout << year << " " << "0" << hour << ":" << "0" << minutes << ":" << secondss;
    }
    else if ((hour < 10 && hour >= 0) && (minutes < 10 && minutes >= 0) && (secondss < 10 && secondss >= 0))
    {
        cout << year << " " << "0" << hour << ":" << "0" << minutes << ":" << "0" << secondss;
    }
    else if (hour > 10 && minutes > 10 && secondss > 10)
    {
        cout << year << " " << hour << ":" << minutes << ":" << secondss;
    }
    else if (hour > 10 && (minutes < 10 && minutes >= 0) && (secondss < 10 && secondss >= 0))
    {
        cout << year << " " << hour << ":" << "0" << minutes << ":" << "0" << secondss;
    }
    else if ((hour < 10 && hour >= 0) && minutes > 10 && (secondss < 10 && secondss >= 0))
    {
        cout << year << " " << "0" << hour << ":" << minutes << ":" << "0" << secondss;
    }
    else if ((hour < 10 && hour >= 0) && (minutes < 10 && minutes >= 0) && secondss > 10)
    {
        cout << year << " " << "0" << hour << ":" << "0" << minutes << ":" << secondss;
    }
    else if (hour > 10 && minutes > 10 && (secondss < 10 && secondss >= 0))
    {
        cout << year << " " << hour << ":" << minutes << ":" << "0" << secondss;
    }
    else if (hour > 10 && (minutes < 10 && minutes >= 0) && secondss > 10)
    {
        cout << year << " " << hour << ":" << "0" << minutes << ":" << secondss;
    }
    else if ((hour < 10 && hour >= 0) && minutes > 10 && secondss > 10)
    {
        cout << year << " " << "0" << hour << ":" << minutes << ":" << secondss;
    }

    return 0;
}