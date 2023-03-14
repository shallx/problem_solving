#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ln = arr.size();
        int left = 0;
        int right = ln - 1;
        while(left!=right){
            int mid = (left+right)/2;
            if(arr[mid+1] > arr[mid]){
                left = mid + 1;
            }else {
                right = mid;
            }

        }
        return left;
        
    }
};

int main(){
    
    Solution sol = Solution();
    vector<int> v{0,2,1,0};
    cout << sol.peakIndexInMountainArray(v) << endl;

    return 0;
}