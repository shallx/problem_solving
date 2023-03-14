#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int ln = nums.size();
        for(int i=0;i<ln;i++) if(nums[i] == target) res.push_back(i);
        return res;
    }
};

int main(){
    vector<int> nums{1,2,5,2,3};
    Solution sol = Solution();

    vector<int> res = sol.targetIndices(nums, 2);
    for(auto it: res){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}