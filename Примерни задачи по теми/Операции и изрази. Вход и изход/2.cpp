//Да се въведе положително число а. Да се изведе:

//лицето и обиколката на квадрат със страна а;
//дължината на окръжност с радиус а;
//лицето и обиколката на равностранен триъгълник със страна а.
//sqrt(3) = 1.73

#include <iostream>

int main ()
{
    double a;
    const double pi = 3.14;
    std::cin >> a;

    double p = 4 * a;
    double s = a * a;
    std::cout << "Square:" << " " << p << std::endl;
    std::cout << "Square:" << " " << s << std::endl;

    double lenght = 2 * pi * a;
    std::cout << "Circle:" << " " << lenght << std::endl;

    double peri = 3 * a;
    double triangleFace = (1.73/4) * (a*a);
    std::cout << "Triangle:" << " " << peri << std::endl;
    std::cout << "Triangle:" << " " << triangleFace << std::endl;

    return 0;
}