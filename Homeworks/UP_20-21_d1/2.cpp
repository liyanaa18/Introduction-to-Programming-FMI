/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Liyana Asenova
* @idnumber 62570
* @task 2
* @compiler VC
*
*/


#include <iostream>

using namespace std;

int main()
{

	int num1 = 0;
	cin >> num1;

	int num2 = 0;
	cin >> num2;

	int biggest_num = 0;
	int previous_num = 0;

	if (num1 > num2) {
		biggest_num = num1;
		previous_num = num2;
	}
	else {
		biggest_num = num2;
		previous_num = num1;
	}

	while (num1 > 0)
	{
		cin >> num1;

		if (num1 <= previous_num)
		{
			continue;
		}
		if (num1 > biggest_num)
		{
			previous_num = biggest_num;
			biggest_num = num1;
			continue;
		}
		if (num1 > previous_num && num1 < biggest_num)
		{
			previous_num = num1;
		}

	}

	cout << previous_num;

	return 0;
}














