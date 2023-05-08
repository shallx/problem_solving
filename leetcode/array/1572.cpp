#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int l = mat[0].size();
        int sum = 0;
        for(int i = 0; i<l; i++){
            sum+= mat[i][i];
        }
        for(int i = 0, j = l-1; i<l; i++, j--){
            sum+= mat[i][j];
        }

        if(l%2 != 0) {
            sum -= mat[l/2][l/2];
        }

        return sum;
    }
};

int main(){
    
    Solution sol = Solution();

    return 0;
}