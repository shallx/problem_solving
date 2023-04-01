#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

// Initialized RightSum as Total Sum of array and Left as zero.
// at each index, right sum gets reduced by current v[i]
// and leftSum increases by v[i]
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& v) {
        int rightSum = 0;
        for(auto a : v) rightSum+=a;
        int leftSum = 0;
        for(int i = 0; i<v.size(); i++){
            int current = v[i];
            rightSum-=current;
            v[i] = abs(leftSum-rightSum);
            leftSum+=current;
        }
        return v;
    }
};

int main(){
    vector<int> v{10,4,8,3};
    Solution sol = Solution();
    sol.leftRigthDifference(v);
    return 0;
}