#include <iostream>
#include <stdio.h>
#include <cctype>

using namespace std;

class Solution {
    bool isAlphaNumeric(char c){
        return (c >= 65 && c <= 90) || (c >= 48 && c <=57);
    }
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        bool isPalindrome = true;
        transform(s.begin(), s.end(), s.begin(),::toupper);
        while(i<=j){
            if(!isAlphaNumeric(s[i])) {
                i++;
            }
            else if(!isAlphaNumeric(s[j])){
                j--;
            }
            else if(s[i] == s[j]){
                i++;
                j--;
            }
            else {
                printf("s[%d] : %c | s[%d] : %c\n", i, s[i], j, s[j]);
                isPalindrome = false;
                break;
            }
        }

        return isPalindrome;
    }
};

int main(){
    Solution sol = Solution();
    string br = "09";
    // transform(br.begin(), br.end(), br.begin(),::toupper);
    printf("%d | %d\n", br[0], br[1]);
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;

    return 0;
}