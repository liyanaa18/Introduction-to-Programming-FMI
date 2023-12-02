#include <iostream>
using namespace std;


int maxSumOfSubarray(int arr[], int size)
{
    int maxSum = 0;
    int maxSumOfSubArray = 0;

    for (int i = 0; i < size; i++) 
    {
        maxSumOfSubArray += arr[i];

        if (maxSum < maxSumOfSubArray) 
        {
            maxSum = maxSumOfSubArray;
        }

        if (maxSumOfSubArray < 0) 
        {
            maxSumOfSubArray = 0;
        }
    }

    return maxSum;
}


int main()
{
	int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };

	cout << maxSumOfSubarray(arr, 8);

	return 0;
}