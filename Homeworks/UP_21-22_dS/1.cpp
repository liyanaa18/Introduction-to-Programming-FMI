#include <iostream>
using namespace std;


//Да се напише програма на C++, която за даден едномерен масив Arr от дробни числа и дължина на масива N, 
//връща нов масив който съдържа числата от първият, 
//които са с нечетни индекси и стойност по-малка от средната стойност на Arr.


int main()
{
	double arr[100];
	int size = 0;

	cin >> size;

	if (size <= 0)
	{
		cout << -1;
		return 0;
	}

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	double average = 0.0;
	double sum = 0.0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	average = sum / size;

	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 && arr[i] < average)
		{
			counter++;
		}
	}

	double* result = new double[counter];
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 && arr[i] < average)
		{
			result[j] = arr[i];
			j++;
		}
	}

	for (int i = 0; i < counter; i++)
	{
		cout << result[i] << " ";
	}

	delete[] result;

	return 0;
}