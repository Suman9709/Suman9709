class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int prod = 1;
       int zerocnt = 0;
        for(int num:nums){
            if(num == 0)
            zerocnt++;
            else
            prod*=num;
        }

        for(int i = 0; i<nums.size(); i++){
            if(zerocnt > 1)
            ans[i] = 0;

            else if(zerocnt == 1 ){
                if(nums[i] == 0){
                    ans[i] = prod;
                }
                else{
                    ans[i] = 0;
                }
            }
            else
            ans[i] = prod/nums[i];
            
        }
        return ans;
    }
};
