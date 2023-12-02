//Да се въведат две числа - а и b, различни от 0. Да се разменят стойностите им.

#include <iostream>

int main()
{
    int first; //8
    int second; //7
    std::cin >> first >> second;
    int temp;
    temp = first; //temp = 8
    first = second;
    second = temp; //second = 8

    std::cout << first << " " << second;
    return 0;
}