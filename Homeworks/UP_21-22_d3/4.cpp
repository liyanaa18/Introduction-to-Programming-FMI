/**
*  
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Liyana Asenova
* @idnumber 62570
* @task 4
* @compiler VC
*
*/

#include <iostream>

using namespace std;
 
size_t strlen(char str[])
{
	size_t counter = 0;
	while (str[counter++] != '\0');

	return counter--;
}

int max (int x, int y)
{
    return x > y ? x : y;
}
 
int longestSubstrWithUniqueSymbolsLength(const char str[])
{
	
	int strLength = strlen(str);
 
 
	int i = 0, j = 0;
	int maxLen = 0;
 
	bool exist[256] = { false };
 
	while (j < strLength)
	{
		if (exist[str[j]])
		{
			maxLen = max(maxLen, j - i);
			while (str[i] != str[j])
			{
				exist[str[i]] = false;
				i++;
			}
 
			i++;
			j++;
		}
		else
		{
			exist[str[j]] = true;
			j++;
		}
	}
 
	maxLen = max(maxLen, strLength - i);
	return maxLen;
}
 
 
int main()
{
	char str[100];
 
	cin >> str;
 
	cout << longestSubstrWithUniqueSymbolsLength(str);

	return 0;
}