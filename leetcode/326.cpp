#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
public:
    float log_a_to_base_3(int a)
    {
        return log2(a) / log2(3);
    }
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        float res = log_a_to_base_3(n);
        float flooredRes = floor(res);
        printf("%f %f\n", res, flooredRes);
        if(res == flooredRes) {
            return true;
        }
        
        else return false;
    }
};

int main(){
    Solution sol = Solution();
    cout << sol.isPowerOfThree(4782968) << endl;
    return 0;
}