/**
*  
* Solution to homework assignment 2
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

int reverseDigits(int num)
{
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    return reverse;
}

bool isPalindrome(int num)
{
 
    int reverseNum = reverseDigits(num);
 
    if (reverseNum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cin >> num;

    if (num < 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    if (num <= 101 && num >= 0)
    {
        cout << "101" << endl;
        return 0;
    }

    if (isPalindrome(num) == true)
    {
        cout << num << endl;
    }


    if (isPalindrome(num) == false)
    {
        int minNum = num - 1;
        int maxNum = num + 1;

        while (isPalindrome(num) == false)
        {
            if (isPalindrome(minNum) == true)
            {
              cout << minNum;
              return 0;
            } 
            
            else if (isPalindrome(maxNum) == true)
            {
              cout << maxNum;
              return 0;
            }

            maxNum++;
            minNum--;

        }
        
    }

    return 0;
}