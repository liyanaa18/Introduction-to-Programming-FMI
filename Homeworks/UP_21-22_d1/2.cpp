/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Liyana Asenova
* @idnumber 62570
* @task 2
* @compiler VC
*
*/


#include <iostream>
 
using namespace std;
 
int powerTen(int degree)
{
	int ans = 1;
	for (int i = 0; i < degree; i++) {
		ans *= 10;
	}
	return ans;
}
 
int digitsInNum(int number) {
	int digits = 0;
 
	while (number >= 10) {
		number /= 10;
		digits++;
	}
 
	return digits + 1;
}
 
int main() {
 
 
	int n = 0;
	cin >> n;
 
	int digits = digitsInNum(n);
 
	int firstDig = 0;
	int secDig = 0;
 
	int numToOperate = n;
	int secondDigHelper = n;
	for (int i = 0; i < digits / 2 + 1; i++) {
		numToOperate = n;
		if (i == digits / 2 && digits % 2 != 0) {
			cout << secondDigHelper % 10;
			break;
		}
		if (i == digits / 2 && digits % 2 == 0) {
			break;
		}
 
		secDig = secondDigHelper % 10;
		secondDigHelper /= 10;
		numToOperate = numToOperate / powerTen(digits - i - 1);
		firstDig = numToOperate % 10;
 
		if (firstDig > secDig) {
			cout << firstDig << " ";
		}
		else if (firstDig < secDig)
		{
			cout << secDig << " ";
		}
		else {
			continue;
		}
 
	}
 
	return 0;
}