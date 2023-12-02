#include <iostream>
#include <cstring>

using namespace std;

const int MAX_BUFFER_SIZE = 100;

int strlen(char str[]) {
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
    int counter = 0;

    for (int i = 1; i < size; i++)
    {
        if (str[i] == ' ' && str[i - 1] != ' ')
        {
            counter++;
        }
    }
    if (str[size - 1] != ' ') {
        ++counter;
    }

    cout << counter;

    return 0;
}
