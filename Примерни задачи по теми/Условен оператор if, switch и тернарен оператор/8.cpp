#include <iostream>
using namespace std;

int main()
{
	int first;
    int second;
    int third;
    cin >> first >> second >> third;

    if (first < second && first < third && third < second)
    {
        cout << second << third << first; 
    }
    else if (second < first && second < third && first < third)
    {
        cout << third << first << second;
    }
    else if (first < second && first < third && second < third)
    {
        cout << third << second << first;
    }
   else if (second < first && second < third && first > third)
   {
       cout << first << third << second;
   }
   else if (third < first && third < second && first > second)
   {
      cout << first << second << third; 
   }
   else if (third < first && third < second && first < second)
   {
      cout << second << first << third; 
   }
	return 0;
}