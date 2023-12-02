#include <iostream>
using namespace std;

int main()
{
    char symbol;
    std::cin >> symbol;

    if (symbol >= 'a' && symbol <= 'z')
    {
        std::cout << "Symbol is in the alphabet" << endl;
    }
    else if (symbol >= 'A' && symbol <= 'Z')
    {
        std::cout << "Symbol is in the alphabet" << endl;
    }
    else
    {
        std::cout << "Symbol is not in the alphabet" << endl;
    }
    return 0;
}