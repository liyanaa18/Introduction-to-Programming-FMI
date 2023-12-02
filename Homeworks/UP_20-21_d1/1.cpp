/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Liyana Asenova
* @idnumber 62570
* @task 1
* @compiler VC
*
*/

#include <iostream>

using namespace std;

int main() {
	int age;
	cin >> age;
	int price_laptop;
	cin >> price_laptop;
	int price_toys;
	cin >> price_toys;

	int sum = 0;
	int cash = 0;
	int toys = 0;
	int result;


	for (int i = 1; i <= age; i++)
	{
		if (i % 2 == 0) {

			cash += 30;
			sum += (cash - 5);

		}
		else {
			toys++;
		}

	}

	result = sum + toys * price_toys;

	if (result > price_laptop) {
		cout << "Yes" << endl;
		cout << result - price_laptop << endl;
	}
	else {
		cout << "No" << endl;
		cout << price_laptop - result << endl;
	}


	return 0;
}
