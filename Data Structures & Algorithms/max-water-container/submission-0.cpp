class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int maxstorage = 0;
        while(left < right){
            int width = right - left;
            int height = min(heights[left], heights[right]);
            int area = width * height;
            maxstorage = max(maxstorage, area);

            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxstorage;

    }
};
