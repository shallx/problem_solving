#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.push_back(3*10^4 + 1);
        int n = nums.size();
        int i = 0;
        int result = -1;
        while(i < n){
            if(nums[i] == nums[i+1]){
                i+=2;
            }
            else {
                result = nums[i];
                break;
            }
        }
        return result;
    }
};

int main(){
    vector<int> nums{4,1,2,1,2};
    Solution sol = Solution();
    cout << sol.singleNumber(nums) << endl;
    return 0;
}