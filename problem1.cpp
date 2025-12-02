#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortArrays(vector<int>& nums) {
        int count[3] = {0, 0, 0};

        for (int num : nums) {
            count[num]++;
        }

        int index = 0;
        for (int i = 0; i < count[0]; i++) nums[index++] = 0;
        for (int i = 0; i < count[1]; i++) nums[index++] = 1;
        for (int i = 0; i < count[2]; i++) nums[index++] = 2;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    s.sortArrays(nums);
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
