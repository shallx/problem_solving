#include <iostream>
#include <stdio.h>

using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 == 0) return n;
        else return n*2;
    }
};

int main(){
    Solution sol = Solution();
    cout << sol.smallestEvenMultiple(1) << endl;
    return 0;
}