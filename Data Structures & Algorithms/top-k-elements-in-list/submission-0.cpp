class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        unordered_map<int, int>freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<pair<int, int>>arr;
        for(auto it:freq){
            arr.push_back(it);

        }
        sort(arr.begin(), arr.end(), [](pair<int, int>&a, pair<int, int>&b){
            return a.second > b.second;
        });
        for(int i = 0; i<k; i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};
