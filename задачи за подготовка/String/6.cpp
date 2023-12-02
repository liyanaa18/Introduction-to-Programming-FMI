#include <iostream>
#include <cstring>
using namespace std;

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
    const int MAX_BUFFER_SIZE = 100;
    char str[MAX_BUFFER_SIZE];
    cin.getline(str, MAX_BUFFER_SIZE);
    int size = strlen(str);

    
    return 0;
}