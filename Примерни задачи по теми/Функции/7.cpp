#include <iostream>
using namespace std;

int pow(int a, int b)
{
    if (b == 0)
        return 1;
    int answer = a;
    int increment = a;
    int i, j;
    for(i = 1; i < b; i++)
    {
        for(j = 1; j < a; j++)
        {
            answer += increment;
        }
        increment = answer;
    }
    return answer;
}

int main() {

	int num;
    int n;
    cin >> num >> n;
    cout << pow(num, n) << endl;

	return 0;
}