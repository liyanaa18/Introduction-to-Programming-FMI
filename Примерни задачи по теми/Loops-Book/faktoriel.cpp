#include <iostream>


int main()
{
    int n;
    unsigned long long fact = 1;
    std::cin >> n;
    if (n < 0)
    {
        std::cout << "Error!" << std::endl;
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        std::cout << "Factoriel:" << fact << std::endl;
    }

    return 0;
}