#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        for(int c = 0; c < nums.size()-1; c++){
            int i = c;
            int j = i+1;
            int k = nums.size() - 1;

            while(i<j){
                int total = (nums[i] +nums[j] + nums[k]);
                if(total == 0){
                    v.push_back({nums[i], nums[j], nums[k]});
                    if(nums[j] == nums[j+1])
                    i++;
                    j--;
                }
                else if(total < 0) i++;
                else j--;
            }
        }
        return v;
    }
};

int main(){
    Solution sol = Solution();
    vector<int> nums{-1,0,1,2,-1,-4};
    // -4,-1,-1,0,1,2
    // -4,-1,-1,0,2,2,2,2,2
    vector<vector<int>> v = sol.threeSum(nums);
    return 0;
}