#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int diff = n - (nums[n-1] - nums[0]) + 1;

        return diff;
    }
};

int main(){
    vector<int> v{1,2,3,3};

    Solution sol = Solution();
    cout << sol.removeDuplicates(v) << endl;
}