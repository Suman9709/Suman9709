class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int num:nums){
            sum+=num;
        }
        long long expectedsum = n*(n+1)/2;
        return expectedsum-sum;
    }
};
