/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Liyana Asenova
* @idnumber 62570
* @task 3
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
	int num3 = 0;
	cin >> num3;
	int result = 0;

	int biggest = 0;
	int smallest = 0;
	int middle = 0;

	if (num1 == num2 && num2 == num3)
	{
		result = 1 * num1 + 10 * num2 + 100 * num3;
		cout << result;
		return 0;
	}


	if (num1 >= num2 && num1 >= num3)
	{
		biggest = num1;
		if (num2 > num3)
		{
			middle = num2;
			smallest = num3;
		}
		else
		{
			smallest = num2;
			middle = num3;
		}
	}
	if (num2 >= num1 && num2 >= num3)
	{
		biggest = num2;
		if (num1 > num3)
		{
			middle = num1;
			smallest = num3;
		}
		else
		{
			middle = num3;
			smallest = num1;
		}
	}
	if (num3 >= num1 && num3 >= num2)
	{
		biggest = num3;
		if (num1 > num2)
		{
			middle = num1;
			smallest = num2;
		}
		else
		{
			middle = num2;
			smallest = num1;
		}
	}

	if (biggest != 0 && smallest != 0 && middle != 0)
	{
		result = smallest * 10000 + middle * 1000 + biggest * 100 + middle * 10 + smallest * 1;
		
	}

	if (smallest == 0 && middle != 0)
	{
		result = middle * 10000 + smallest * 1000 + biggest * 100 + smallest * 10 + middle;
	}
	if (smallest == 0 && middle == 0)
	{
		result = biggest * 1000 + middle * 100 + middle * 10 + biggest;
	}

	cout << result << endl;

	return 0;
}












