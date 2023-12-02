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
        cout << first << " " << third << " " << second; 
    }
    else if (second < first && second < third && first < third)
    {
        cout << second << " " << first << " " << third;
    }
    else if (first < second && first < third && second < third)
    {
        cout << first << " " << second << " " << third;
    }
   else if (second < first && second < third && first > third)
   {
       cout << second << " " << third << " " << first;
   }
   else if (third < first && third < second && first > second)
   {
      cout << third << " " << second << " " << first; 
   }
   else if (third < first && third < second && first < second)
   {
      cout << third << " " << first << " " << second; 
   }
	return 0;
}