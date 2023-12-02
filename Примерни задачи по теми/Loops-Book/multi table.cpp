#include <iostream>


int main()
{
    int n;
    

    std::cin >> n;

    for (int i = 1; i <= 10; ++i)
    {
        int multi = n * i;
        std::cout << n << "*" << i << "=" << multi << std::endl;
    }


    return 0;
}