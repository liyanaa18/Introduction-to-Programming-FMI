#include <cstring>
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

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    cout << str;

    return 0;
}