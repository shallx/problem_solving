#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int search(vector<int>& v, int t) {
        int left = 0;
        int right = v.size();
        while(left<right){
            int mid = (left+right)/2;
            if(v[mid] == t) return mid;
            else if (t > v[mid]) left = mid + 1; 
            else right = mid;
        }
        return -1;
    }
};

int main(){
    vector<int> v{-1,0,3,5,9,12};
    int target = 9;
    Solution sol = Solution();
    cout << sol.search(v,9) << endl;
    return 0;
}