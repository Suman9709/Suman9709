class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        
        for(string s:strs){
            vector<int>freq(26,0);
            for(char c:s){
                freq[c-'a']++;
            }

            string key="";
            for(int cnt:freq){
                key+="#"+to_string(cnt);
            }
            mpp[key].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto pair:mpp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
