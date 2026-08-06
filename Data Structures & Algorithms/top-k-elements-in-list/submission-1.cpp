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

        for(const auto& p:freq){
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

        for(int i = 0; i<k; i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
