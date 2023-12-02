// Да се въведат две числа - а и b. Да се изведе тяхната разлика.

#include <iostream>

int main ()
{
    int first;
    int second;
    std::cin >> first >> second;
    int diff = first - second;
    std::cout << "The difference is:" << " " << diff << std::endl;
    return 0;
}