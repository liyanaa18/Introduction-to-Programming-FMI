#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, b, c;
    if (n > 0 && n <= 27) {
        for (int i = 100; i <= 999; i++) {
            a = i % 10;
            b = i / 10 % 10;
            c = i / 100;
            if ((a + b + c == n)) {
                cout <<i<< endl;
            }
        }
     }


    return 0;
}