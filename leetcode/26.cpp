#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int diff = nums[n-1] - nums[0] + 1;
        // printf("%d %d %d\n", n, nums[n-1], nums[0]);
        int matching = nums[0];
        int index = 1;
        for(int i=1; i<n;i++){
            if(nums[i] > matching){
                matching = nums[i];
                nums[index] = matching;
                index++;
            }
        }
        for(auto i: nums){
            cout << i << " ";
        }
        cout << endl;
        return diff;
    }
};

int main(){
    vector<int> v{0,0,1,1,1,2,2,3,3,4};
    // vector<int> v{1,1,2};

    Solution sol = Solution();
    cout << sol.removeDuplicates(v) << endl;
}