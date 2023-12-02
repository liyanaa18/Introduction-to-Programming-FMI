#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    bool m;
    cin >> n >> m;
    int base = 2*n - 1;
    for (int i = 1; i <= base; ++i) {
        cout << '+';
    }
    cout << endl;
    if (m) {
        for (int i = 1; i <= n; ++i) {
            int numberOfSharps = 2*i - 1;
            int numberOfPluses = (base - numberOfSharps)/2;
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            for (int j = 1; j <= numberOfSharps; ++j) {
                cout << '#';
            }
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            cout << endl;
        }
        for (int i = 1; i < n; ++i) {
            int numberOfPluses = (base - 1)/2;
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            cout << '#';
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            cout << endl;
        }
    } else {
        for (int i = 1; i < n; ++i) {
            int numberOfPluses = (base - 1)/2;
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            cout << '#';
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            cout << endl;
        }
        for (int i = n; i > 0; --i) {
            int numberOfSharps = 2 * i - 1;
            int numberOfPluses = (base - numberOfSharps) / 2;
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            for (int j = 1; j <= numberOfSharps; ++j) {
                cout << '#';
            }
            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            cout << endl;
        }
    }
    for (int i = 1; i <= base; ++i) {
        cout << '+';
    }
    return 0;
}