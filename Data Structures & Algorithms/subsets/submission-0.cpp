class Solution {
private:
void solve(int index, vector<int>& num, vector<int>& subset, vector<vector<int>>& ans){
    if(index == num.size()){
        ans.push_back(subset);
        return;
    }

    subset.push_back(num[index]);
    // keep the element
    solve(index+1, num, subset, ans);

    // back track
    subset.pop_back();

// not keep the element

solve(index+1, num, subset, ans);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>> ans;
    
     vector<int>subset;
    solve(0, nums, subset, ans);
    return ans;
     
    }
};
