//Да се въведе число, което да представлява сума в лева и да се изведе 
//конвертираната сума в евро при курс на лева спрямо еврото 0.511306792.
//Да се въведе сумата в левове и да се изведе в евро.


#include <iostream>

int main ()
{
    int leva;
    std::cin >> leva;
    const double euroCourse = 0.511306792;
    double euro = leva * euroCourse;
    std::cout << "In euro is:" << " " << euro << std::endl; 
    
    return 0;
}