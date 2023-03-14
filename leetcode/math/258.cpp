#include <iostream>
#include <stdio.h>

using namespace std;

// Reccursive Approach
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num){
            sum += num%10;
            num /= 10;
        }
        if(sum < 10) return sum;
        return addDigits(sum);
    }
};

int main(){
    
    Solution sol = Solution();
    cout << sol.addDigits(2147483647) << endl;

    return 0;
}