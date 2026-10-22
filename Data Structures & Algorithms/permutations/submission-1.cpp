class Solution {
private:
void recurpermute(int index, vector<int>& num, vector<vector<int>> & ans){
    if(index == num.size()){
        ans.push_back(num);
        return;
    }

    for(int i = index; i<num.size(); i++){
        swap(num[index], num[i]);
        recurpermute(index+1, num, ans);
        swap(num[index], num[i]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recurpermute(0, nums,ans);
        return ans;
    }
};
