#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 7;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;          // Initialize with the smallest possible value
    for (int st = 0; st < n; st++) // Loop from 0 to n-1
    {
        int currSum = 0;
        for (int end = st; end < n; end++) // Loop from st to n-1
        {
            currSum += arr[end];           // Accumulate the sum
            maxSum = max(currSum, maxSum); // Update maxSum if currSum is larger
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}
