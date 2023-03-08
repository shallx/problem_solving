#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), count = 0;
        int end = n-1;
        while(1){
            if(s[end] == ' ') end--;
            else break;

        }
        for(int i = end; i >= 0; i--){
            if(s[i] != ' ') count++;
            else break;
        }
        return count;
    }
};

int main(){
    string s = "a";
    Solution sol = Solution();
    cout << sol.lengthOfLastWord(s) << endl;

    return 0;
}