#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& v) {
        // Find initial
        int start = 0, end = 0, mx = v[0];
        int currentSum = mx;
        
        for(int i = 1; i < v.size(); i++){
            if((currentSum <= 0 && v[i] > 0) || (currentSum + v[i] < 0)){
                currentSum = v[i];
                mx = max(mx,currentSum);
            }
            else {
                currentSum += v[i];
                mx = max(mx,currentSum);
            }
            printf("i:%d v:%d currentSum: %d mx: %d\n", i, v[i], currentSum, mx);
        }

        return mx;
    }
};

int main(){
    vector<int> v{-2,1,-3,4,-1,2,1,-5,4};
    Solution sol = Solution();
    cout << sol.maxSubArray(v) << endl;

    return 0;
}