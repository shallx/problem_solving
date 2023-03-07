#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0,j = n-1, count = 0;
        while(i<=j){
            if(nums[j]==val){
                j--;
                count++;
            }
            else if(nums[i] == val){
                swap(nums[j], nums[i]);
                i++; j--;
                count++;
            }
            else i++;
        }
        return n-count;
    }
};

int main(){
    // vector<int> v{0,1,2,2,3,0,4,2};
    vector<int> v{1,1};

    Solution sol = Solution();
    cout << sol.removeElement(v,1) << endl;
    return 0;
}