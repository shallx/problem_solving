#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

// Used Theory of combination.
// If I count the frequency, then i just need to find out
// what is the combination of each number occurance
class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        unordered_map<int, int> mp;
        int count = 0;
        for(int i = 0; i < v.size(); i++) mp[v[i]]++;
        for(auto it: mp){
            if(it.second > 1) {
                cout << it.second << endl;
                count += it.second*(it.second-1)/2;
            }
        }
        return count;
    }
};

int main(){
    vector<int> v{1,2,3,1,1,3};
    // 1,1,1,3,3
    Solution sol = Solution();
    cout << sol.numIdenticalPairs(v) << endl;

    return 0;
}