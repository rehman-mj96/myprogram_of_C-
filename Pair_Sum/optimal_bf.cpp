#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans = {};
    int n = nums.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j]; // Move this inside the loop
        if (pairSum < target)
        {
            i++;
        }
        else if (pairSum > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);

    if (!ans.empty()) // Check if ans has elements before accessing
    {
        cout << ans[0] << endl;
        cout << ans[1] << endl;
    }
    else
    {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
