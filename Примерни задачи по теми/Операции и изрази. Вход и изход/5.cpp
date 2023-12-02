//Огледално на дадено число наричаме това, съставено от цифрите му в обратен ред. 
//Да се въведе четирицифрено число и да се изведе огледалното му.


#include <iostream>

int main ()
{
    int num;
    std::cin >> num;
    
    int num1 = num / 1000; 
    int num2 = (num % 1000) / 100; 
    int num3 = ((num % 1000) % 100) / 10; 
    int num4 = ((num % 1000) % 100) % 10;

    std::cout << num4 << num3 << num2 << num1 << std::endl;

    return 0;
}