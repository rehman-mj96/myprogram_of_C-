#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>  // Needed for sort()

using namespace std;

int majorityElement(vector<int>& nums) {
    // sort:
    sort(nums.begin(), nums.end());

    // Frequency count:
    int freq = 1, ans = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i - 1] == nums[i]) {
            freq++;
        } else {
            freq = 1;  // Reset frequency count
            ans = nums[i];  // Update ans to the current element
        }

        if (freq > nums.size() / 2) {
            return ans;
        }
    }

    // Return -1 if no majority element is found
    return -1;
}

int main(int argc, char const *argv[]) {
    vector<int> vec = {1, 4, 4, 2, 4, 1, 3, 4, 4};
    int result = majorityElement(vec);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
