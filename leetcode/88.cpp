#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        if(nums1[0] == 0) i = j;
        int k = m + n - 1;
        printf("%d %d %d\n", i,j,k);

        while(k >= 0){
            if(j < 0) break;
            if(nums1[i] > nums2[j]){
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
    vector<int> nums1{2,0};
    vector<int> nums2{1};
    Solution sol = Solution();
    sol.merge(nums1, 1, nums2, 1);
    for(auto it: nums1){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}