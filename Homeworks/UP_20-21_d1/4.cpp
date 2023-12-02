/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Liyana Asenova
* @idnumber 62570
* @task 4
* @compiler VC
*
*/


#include <iostream>
using namespace std;

int main() {

    int number = 0;
    int first = 0;
    int second=0;
    int third=0;
    int first_num=0;
    int second_num=0;
    int sum=0;
    int min_sum=0;
    
    if (number > 0)
    {
        cin >> number;
        
        for (int i = 2; i <= sqrt (number); i++) 
        {   
            number = number / i;
            cout << i << endl;
        }
        if (number > 2)
        {
            cout << number << endl;
        }
      
    }
    else 
    {
        cout << " " << endl;
    }

    return 0;
}

