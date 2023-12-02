//Да се напише void функция на C++, която приема като параметър цяло положително число и го преобразува в средното аритметично на цифрите му(закръглено надолу).
//Функцията да не извиква други функции.
//Да се напише програма, която извиква написаната функция върху три цели числа(едноцифрено, двуцифрено и избрано от вас) и извежда на екрана резултатите за всяко от тях.


#include <iostream>
using namespace std;

void average(int num)
{
    int sum = 0;
    int count = 0;


    if (num == 0)
    {
        cout << sum;
    }

    else if (num != 0)
    {
        while (num != 0)
        {
            int rem = num % 10;
            sum += rem;
            count++;
            num /= 10;
        }
        int result = sum / count;
        cout << result;
    }
}

int main()
{
    average(0);

    cout << endl;

    average(34);

    int num;
    cin >> num;

    average(num);

    return 0;
}