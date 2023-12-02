/**
*  
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
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
	int a = 0, b = 0;
	int maxPass = 0;

	cin >> a >> b >> maxPass;

	int passToPrint = 0;

	if (a * b >= maxPass)
	{
		passToPrint = maxPass;
	}


	int countPass = 0;

	char A = 34;
	char B = 63;
	int x = 0;
	int y = 0;

	for (int i = 1; i <= a; i++) 
	{
		for (int j = 1; j <= b; j++) 
		{

			if (A > 55)
			{
				A = 35;
			}
			else
			{
				A++;
			}

			if (B > 96)
			{
				B = 64;
			}
			else
			{
				B++;
			}

			cout << A << B << i << j << B << A << "|";

			countPass++;

			if (countPass == passToPrint) 
			{
				return 0;
			}
		}
	}

	return 0;
}