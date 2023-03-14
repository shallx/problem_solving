class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxArea = 0;
        while(left<right){
            int area = min(height[left], height[right]) * (height[right]-height[left]);
            if(area > maxArea){
                left++;
                maxArea = area;
            } else right --;

        }
        return maxArea;
    }
};