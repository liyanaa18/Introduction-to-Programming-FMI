#include <iostream>
using namespace std;

const int MAX_BUFFER_SIZE = 100;

int strlen(char str[]) 
{
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }

    return size;
}

int main()
{
    char str[MAX_BUFFER_SIZE];
    cin.getline(str, MAX_BUFFER_SIZE);
    int size = strlen(str);
    int k;
    cin >> k;

    if (k == 0)
    {
        return 0;
    }

    int counter = 0;

    int i =0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            counter++;
        }
        i++;
    }

    if (str[0] != '\0' && counter == 0)
    {
        counter++;
    }
    
    if (k < 0 || k > counter)
    {
        cout << -1;
        return 0;
    }

    i = 0;
    counter = 0;

    while (str[i] != '\0')
    {
        if (counter == k - 1 && str[i+1] == ' ')
        {
            cout << str[i];
            break;
        }
        if (str[i] == ' ')
        {
            counter++;
        }
        cout << str[i];
        i++;
    }

    return 0;
}