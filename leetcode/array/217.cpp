#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        sort(v.begin(),v.end());
        int ln = v.size() - 1;
        for(int i = 0; i < ln; i++){
            if(v[i] == v[i+1]) return true;
        }
        return false;
    }
};

int main(){
    
    Solution sol = Solution();
    vector<int> v{1,2,3,1};
    cout << sol.containsDuplicate(v) << endl;

    return 0;
}