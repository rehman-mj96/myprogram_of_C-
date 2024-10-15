#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int Maj_elm(vector<int> &vec) {
    int n = vec.size();
    for (int val : vec) {
        int freq = 0;
        for (int elm : vec) {
            if (val == elm) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return val;
        }
    }
    return -1;  // Return -1 if no majority element is found
}

int main(int argc, char const *argv[]) {
    vector<int> vec = {1, 4, 4, 2, 4, 1, 3, 4, 4};
    int result = Maj_elm(vec);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}
