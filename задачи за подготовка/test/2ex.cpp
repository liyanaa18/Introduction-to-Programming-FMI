//Да се напише функция, която по дадено число в интервала 0 - 86000, го интерпретира като брой секунди от началото на деня и връща като резултат часа във формат HH : MM.
//Да се напише програма, която използва написаната функция, за да въведе от конзолата цяло число, и по него да изчисли и изведе часа във формат HH : MM.


#include <iostream>
using namespace std;

void secondsOfTheDay (int seconds = 0)
{
    int minutes = seconds / 60;
    int hour = seconds / 3600;

    if ((hour <= 9 && hour >= 0) && minutes > 9)
    {
        cout << "0" << hour << ":" << minutes;
    }
    else if (hour > 9 && (minutes <= 9 && minutes >= 0))
    {
        cout << hour << ":" << "0" << minutes;
    }
    else if ((hour <= 9 && hour >= 0) && (minutes <= 9 && minutes >= 0))
    {
        cout << "0" << hour << ":" << "0" << minutes; 
    }
    else if (hour > 9 && minutes > 9)
    {
        cout << hour << ":" << minutes;
    }
    
}

int main()
{
    int seconds = 0;
    cin >> seconds;

    secondsOfTheDay(seconds);

    return 0;
}