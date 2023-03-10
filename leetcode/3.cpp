#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string checkingSub = "";
        checkingSub += s[0];
        char checkingChar = s[0];
        int mx = 1,count=1, ln = s.size();
        cout << "CheckingSub: " << checkingSub[0]<< endl;
        cout << "CheckingChar: " << checkingChar << endl;
        for(int i=1; i<ln;i++){
            if(checkingChar != s[i] && checkingChar != checkingSub[0]) {
                cout << "Checking: " << s[i] << endl;
                checkingSub+=s[i];
                checkingChar= s[i];
                count++;
                checkingSub = max(count,mx);
            } else {
                cout << "Else: " << s[i] << endl;
                checkingSub.clear();
                checkingSub += s[i];
                checkingChar = s[i];
                count = 1;
            }
        }
        return mx;
        
    }
};

int main(){
    string s = "adibasi";
    Solution sol = Solution();
    cout << sol.lengthOfLongestSubstring(s) << endl;

    return 0;
}