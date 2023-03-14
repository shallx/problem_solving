#include <iostream>
#include <stdio.h>

using namespace std;

// O(1) solution, mod of 9
class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        else if (num % 9 == 0) return 9;
        else return num % 9;
    }
};

int main(){
    
    Solution sol = Solution();
    cout << sol.addDigits(2147483647) << endl;

    return 0;
}