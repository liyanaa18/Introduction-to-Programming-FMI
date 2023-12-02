//Да се въведе цяло четирицифрено число. 
//Да се изведе сумата, произведението и средноаритметично от цифрите му.

#include <iostream>

int main ()
{
    int num;
    std::cin >> num;

    int num1 = num / 1000; 
    int num2 = (num % 1000) / 100; 
    int num3 = ((num % 1000) % 100) / 10; 
    int num4 = ((num % 1000) % 100) % 10;

    float sum = num1 + num2 + num3 + num4;
    int multi = num1 * num2 * num3 * num4;
    float average = sum / 4;

    std::cout << "sum=" << sum << "," << " " << "p=" << multi << "," << " " << "average=" << average << std::endl;

    return 0;
}