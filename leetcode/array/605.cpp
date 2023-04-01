#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        if(v.size() == 1){
            if(v[0] == 0 && n> 0) n--;
        }
        else if(v[0] == 0 && v[1] == 0){
            if(n > 0){
                v[0] = 1;
                n--;
            }
            
        }
        for(int i = 1; i< v.size()-1 && n > 0; i++){
            if(v[i] != 1 && v[i-1] == 0 && v[i+1] == 0){
                v[i] = 1;
                n--;
            }
        }
        if(v.size() >= 2 && v[v.size()-2] == 0 && v[v.size()-1] == 0 && n> 0){
            v[v.size()-1] = 1;
            n--;
        }
        return n == 0 ?  true : false;
    }
};

int main(){
    vector<int> v{0,0,1,0,1};
    Solution sol = Solution();
    cout << sol.canPlaceFlowers(v, 1) << endl;
    return 0;
}