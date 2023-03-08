#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int findMax(vector<int>& piles){
        int mx = piles[0];
        int ln = piles.size();
        for(int i=1; i<ln; i++){
            mx = max(mx, piles[i]);
        }
        return mx;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right=findMax(piles);

        while(left<right){
            double m = (left+right)/2;
            int sum = 0;
            for(auto x:piles) sum+=ceil(x/m);
            if(sum<=h) right=m;
            else left=m+1;
        }
        return left;
        
    }
};