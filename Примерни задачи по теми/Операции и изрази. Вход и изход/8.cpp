//Напишете потребителски интерфейс, който изисква от потребителя да въведе количество от даден продукт (по ваш избор) и цената му. 
//Нека софтуерът попита за три различни продукта. 
//Накрая изведете сметката на потребителя: какъв брой от какво си е поръчал и колко ще му струва.

#include <iostream>
using namespace std;

int main() {
    int first;
    int second;
    int third;

    double priceFirst;
    double priceSecond;
    double priceThird;

    cout << "Apples:";
    cin >> first >> priceFirst;

    cout << "Oranges:";
    cin >> second >> priceSecond;

    cout << "Bananas:";
    cin >> third >> priceThird;

    double apple = first * priceFirst;
    double orange = second * priceSecond;
    double bananas = third * priceThird;
    double sum = apple + bananas + orange;

    cout << "Your order is:" << "Apples for" << " "<< apple << " , " << "Oranges for" << " " << orange << " , " << "Bananas for" << " " << bananas << endl;
    cout << "Total:" << sum;

    return 0;
}