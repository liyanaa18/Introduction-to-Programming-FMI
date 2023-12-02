/**
*
* Solution to homework assignment 1
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
	int num = 0;
	cin >> num; 

	int salary = 0;
	cin >> salary; 

	if (num < 1 || num > 10)  
	{
		cout << "-1" << "\0";
		return 0;
	}
	if (salary > 1500 || salary < 700)
	{
		cout << "-1" << "\0";
		return 0;
	}

	char site;
	
     for (int i = 0; i < num; i++)
	 {
		cin >> site;

			if (site == 'F' || site == 'f')
			{
				salary = salary - 150;
			}
			else if (site == 'I' || site == 'i')
			{
				salary = salary - 100;
			}
			else if (site == 'R' || site == 'r')
			{
				salary = salary - 50;
			}
			else if (site == 'd' || site == 'D')
			{
				salary = salary;
			}
			else if (site != 'F')
			{
				cout << "-1" << "\0";
				return 0;
			}
			else if (site != 'f')
			{
				cout << "-1" << "\0";
				return 0;
			}
			else if (site != 'I')
			{
				cout << "-1" << "\0";
				return 0;
			}
			else if (site != 'i')
			{
				cout << "-1" << "\0";
				return 0;
			}
			else if (site != 'R')
			{
				cout << "-1" << "\0";
				return 0;
			}
			else if (site != 'r')
			{
				cout << "-1" << "\0";
				return 0;
			}
			else if (site != 'd') 
			{
				cout << "-1" << "\0";
				return 0;
			}
			else if (site != 'D')
			{
				cout << "-1" << "\0";
				return 0;
			}

			if (salary <= 0)
			{
				cout << "You have lost your salary.";
				break;
			}
	 }

	 if (salary > 0)
	 {
		 cout << salary << "\0";
	 }
	
	return 0;
}