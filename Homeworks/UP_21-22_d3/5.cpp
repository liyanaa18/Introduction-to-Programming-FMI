/**
*  
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Liyana Asenova
* @idnumber 62570
* @task 5
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
char myToupper(char symb)
{
    if (symb >= 'a' && symb <= 'z')
    {
        symb = symb - 32;
    }
    return symb;
}
int main()
{
    char arr[255];
    cin >> arr;
    int size = strlen(arr);

    char upperLetters[100];
    char lowLetters[100];

    int k1 = 0;
    int k2 = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            lowLetters[k1++] = arr[i];
        }  
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            upperLetters[k2++] = arr[i];
        }
    }
    for (int i = 0; i < k1; i++)
    {
        lowLetters[i] = myToupper(lowLetters[i]);
    }

    if (k1 == k2)
    {
        for (int i = 0; i < k1; i++)
        {
            if (lowLetters[i] != upperLetters[i])
            {
                cout << "No";
                return 0;
            }
            else
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    else 
    {
        cout << "No";
        return 0;
    }

    return 0;
}
