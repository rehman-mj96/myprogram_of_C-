#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 7, maxSum = INT_MIN; // Initialize with the smallest possible value
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0;
    for (int val : arr)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum << endl;
}