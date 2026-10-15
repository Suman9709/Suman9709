class Solution {
private:
void findCombination(int index, int target,vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds){
    if(index == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }
    // pick the element
    if(arr[index] <= target){
        ds.push_back(arr[index]);
        findCombination(index, target-arr[index], arr, ans, ds);
        ds.pop_back();
    }
    findCombination(index+1, target, arr, ans, ds);
}
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0, target, nums, ans, ds);
        return ans;
    }
};
