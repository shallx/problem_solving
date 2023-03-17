#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[nums[i]]);
        }
        return res;
    }
};

int main(){
    vector<int> v{0,2,1,5,3,4};
    Solution sol = Solution();
    sol.buildArray(v);

    return 0;
}