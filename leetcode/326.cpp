#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        if(n == 1) return true;
        else if(n % 3 != 0) return false;
        else return isPowerOfThree(n / 3);
    }
};

int main(){
    Solution sol = Solution();
    cout << sol.isPowerOfThree(25) << endl;
    return 0;
}