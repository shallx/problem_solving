#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int mx = 0;
        while(left<right){
            int area = min(height[left], height[right]) * (right-left);
            printf("left %d(%d) | right %d(%d)\n", height[left], left, height[right], right);
            cout << "Area: " << area << endl;
            if(area > mx){
                left++;
                mx = area;
            } else right --;

        }
        return mx;
    }
};

int main(){
    
    Solution sol = Solution();
    vector<int> height = {2,3,4,5,18,17,6};
    cout << sol.maxArea(height) << endl;
    

    return 0;
}