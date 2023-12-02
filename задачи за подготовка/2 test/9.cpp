//Да се напише програма, 
//която приема като вход редица от естествени числа и 
//връща като изход сумата от цифрите на тези числа.

#include <iostream>
using namespace std;

int sumOfDigits (int num)
{
	int sum = 0;

	while (num != 0)
	{
		int rem = num % 10;
		sum += rem;
		num /= 10;	
	}
	return sum;
}

int main()
{
	int num;
	
	while (cin >> num)
	{
		cout << sumOfDigits(num);
	}
	
	return 0;
}