#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long result = x;
        while(result*result > x){
            result = (result + x/result)/2;
        }
        return result;
    }
};

int main(){
    Solution sol = Solution();
    cout << sol.mySqrt(16)  << endl;
    return 0;
}