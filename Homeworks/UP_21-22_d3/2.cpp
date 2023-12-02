/**
*  
* Solution to homework assignment 3
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
 
int longestDist(const int arr[], const int arrSize) 
{
	if (arrSize < 2)
    {
		return -2;
    }
 
	int maxLength = 0;
	int newLength = 0;
	int index = -1;
 
	for (int i = 0; i < arrSize; i++) 
    {
		for (int j = arrSize - 1; j > i; j--) 
        {
			if (arr[i] == arr[j]) 
            {
				newLength = j - i;
				if (maxLength < newLength) 
                {
					maxLength = newLength;
					index = i;
				}
			}
		}
	}
 
	return index;
}
 
int main() 
{
 
	int N = 0;
	cin >> N;
 
	int arr[100];
 
	for (int i = 0; i < N; i++) 
    {
		cin >> arr[i];
	}
 
	cout << longestDist(arr, N);
 
	return 0;
}
