#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m + n - 1;

        while(k >= 0){
            if(j < 0) break;
            else if(i < 0){
                nums1[k] = nums2[j];
                k--;
                j--;
            }
            else if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
    }
};

int main(){
    vector<int> nums1{0,0,0,0,0};
    vector<int> nums2{1,2,3,4,5};
    Solution sol = Solution();
    sol.merge(nums1, 0, nums2, 5);
    for(auto it: nums1){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}