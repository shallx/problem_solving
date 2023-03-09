#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int, greater<int>> s1;
        set<int, greater<int>> s2;
        vector<int> v;
        for(auto i : nums1) s1.insert(i);
        for(auto i : nums2) s2.insert(i);

        set<int>::iterator it1 = s1.begin();
        set<int>::iterator it2 = s2.begin();
        
        
        while(it1 != s1.end() && it2 != s2.end()){

            if(*it1 == *it2) {
                v.push_back(*it1);
                it1++;
                it2++;
            }
            else if(*it1 > *it2) it1++;
            else it2++;
        }
        return v;
    }
};

int main(){
    Solution sol = Solution();
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
    vector<int> v = sol.intersection(nums1,nums2);
    for(auto a : v){
        cout << a << " " << endl;
    }
    cout << endl;

    return 0;
}