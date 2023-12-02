#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    int count = 0;

    double arr[24];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        else 
        {
            count++;       
        }
    }
    cout << "The sum of positive numbers:" << sum << endl;
    cout << "The negative numbers are:" << count << endl;
    
    return 0;
}