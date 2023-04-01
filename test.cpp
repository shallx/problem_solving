#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    void nonZero(vector<int>& v){
        int zeroIndex = -1;
        int replaceIndex = 0;
        int count = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == 0){
                zeroIndex = i;
            }else if(zeroIndex != -1){
                v[zeroIndex] = v[i];
                zeroIndex = i;
                count ++;
            }
        }
        cout << endl;
    }
};

int main(){
    vector<int> v{0,3,1,0,4};
    Solution sol = Solution();
    sol.nonZero(v);

    return 0;
}