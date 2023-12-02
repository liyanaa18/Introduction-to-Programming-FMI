#include <iostream>
using namespace std;
int main() 
{
    int n; 
    cin >> n;
    int arr1[50];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[50];
    for (int j = 0; j < m; ++j)
    {
        cin >> arr2[j];
    }

    int arr3[100];

    for (int i = 0, j = 0; i + j < n + m; )
    {
        if (arr1[i] < arr2[j]) {
			if (i < n) {
				arr3[i + j] = arr1[i];
				++i;
			}
			else {
				arr3[i + j] = arr2[j];
				++j;
			}
		}
		else {
			if (j < m) {
				arr3[i + j] = arr2[j];
				++j;
			} 
			else {
				arr3[i + j] = arr1[i];
				++i;
			}
				
		}
    }

    for (int k = 0; k < n + m; k++)
    {
        cout << arr3[k] << " ";
    }
	
	return 0;
}