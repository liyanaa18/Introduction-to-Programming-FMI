#include <iostream>
using namespace std;

//Да се напише функция на C++, която приема като параметри символен низ S и символ C. 
//Функцията да връща като резултат сумата на ASCII стойностите на думите които започват със символът C.


bool isWhiteSpace(char item)
{
	return item == ' ' || item == '\t';
}

int sumOfASCIIValues(char arr[], char symbol)
{
	int sum = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (!isWhiteSpace(arr[i]) && arr[i] != '\0')
		{
			while (!isWhiteSpace(arr[i]) && arr[i] != '\0')
			{
				if (arr[i] == symbol && (isWhiteSpace(arr[i - 1])) || (arr[i] == symbol && arr[0] == symbol))
				{
					while (!isWhiteSpace(arr[i]) && arr[i] != '\0')
					{
						arr[i] = (int)arr[i];
						sum += arr[i];
						i++;
					}
				}

				i++;
			}
		}
	}

	return sum;
}

int main()
{
	char str[] = { "This   is  a string" };

	cout << sumOfASCIIValues(str, 'T');

	return 0;
}