//Напишете програма, която въвежда две числа - a и b и връща (a + b)3

#include <iostream>

int main ()
{
    int first;
    int second;
    std::cin >> first >> second;
    int sum = first + second;
    int multi = sum * sum * sum;
    std::cout << "The multi is:" << " " << multi << std::endl;
    return 0;
}