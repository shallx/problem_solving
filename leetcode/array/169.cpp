#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        pair<int,int> ip, mp;
        ip = mp = make_pair(nums[0], 1);
        
        for(int i = 1; i<n; i++){
            if(nums[i] == ip.first){
                ip.second++;
                if(ip.second > mp.second) mp = ip;
            } else ip = make_pair(nums[i], 1);
        }
        return mp.first;
        
    }
};

int main(){
    vector<int> nums{2,2,1,1,1,2,2};
    Solution sol = Solution();
    cout << sol.majorityElement(nums) << endl;

    return 0;
}