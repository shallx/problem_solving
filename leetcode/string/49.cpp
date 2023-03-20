#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        
        for(int i = 0; i< strs.size(); i++){
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            ump[strs[i]].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it: ump){
            res.push_back(it.second);
        }
        return res;
    }
};

int main(){
    
    Solution sol = Solution();
    vector<string> strs{"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> res = sol.groupAnagrams(strs);
    for(auto it : res){
        for(auto itr : it){
            cout << itr << " ";
        }
        cout << endl;
    }

    return 0;
}