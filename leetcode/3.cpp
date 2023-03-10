#include <iostream>
#include <stdio.h>
#include <string.h>
#include <list>
#include <algorithm>

using namespace std;

class Solution {
public:
    void showLS(list<char>& ls){
        printf("List(%d):", ls.size());
        for(auto i : ls){
            cout << i;
        }
        cout << endl;

    }
    bool contains(list<char>& ls, char value){
        list<char>::iterator it = find(ls.begin() , ls.end() , value);
        return it != ls.end();
    }
    
    // remove until X and add value to end
    int removeUntilXFromSet(list<char>& ls, char value){
        while(ls.front() != value){
            ls.pop_front();
        }
        ls.pop_front();
        ls.push_back(value);
        return ls.size();

    }
    int lengthOfLongestSubstring(string s) {
        
        if( s == "") return 0;
        list<char> checkingSub;
        checkingSub.push_back(s[0]);
        char start = s[0];
        char end = s[0];
        int mx = 1,count=1, ln = s.size();
        for(int i=1; i<ln;i++){
            if(!contains(checkingSub, s[i])) {
                checkingSub.push_back(s[i]);
                count++;
                mx = max(count,mx);
            } 
            else {
                count = removeUntilXFromSet(checkingSub, s[i]);
            }
        }
        return mx;
        
    }
};

int main(){
    string s = "aabaab!bb";
    Solution sol = Solution();
    cout << sol.lengthOfLongestSubstring(s) << endl;

    return 0;
}