#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int length = nums.size();
        int sum = 0;
        map<int, int> map;
        for(int i = 0; i<length; i++){
            if(map.count(nums[i]) == 0){
                map[nums[i]] = i;
            }
            if(map.count(nums[i]) > 0 && map.count(nums[i]-diff) > 0 && map.count(nums[i] - diff*2) > 0){
                sum++;
                // cout << "Current Index " << i << " Value: " << nums[i] << endl; 
                // cout << map[nums[i] - diff*2] << " " << map[nums[i]-diff] << " " << map[nums[i]] << endl;
            }
        }
        return sum;
    }
};

int main()
{
    Solution sol = Solution();
    vector<int> s = {0,1,4,6,7,10};
    cout << sol.arithmeticTriplets(s, 3) << endl;
    // for(auto it : s){
    //     cout << it << " ";
    // }
    return 0;
}

