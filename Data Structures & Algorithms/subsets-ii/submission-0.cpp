class Solution {
private:
void solve(int index, vector<int>& num, vector<int>& subset,  vector<vector<int>>& ans){
    if(index == num.size()){
        ans.push_back(subset);
        return;
    }
    subset.push_back(num[index]);
    solve(index+1, num, subset, ans);

    subset.pop_back();

    while(index+1 < num.size() && num[index] == num[index+1])
    index++;

    solve(index+1, num, subset, ans);
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int>subset;
         sort(nums.begin(), nums.end());

         solve(0, nums, subset, ans);
         return ans;
    }
};
