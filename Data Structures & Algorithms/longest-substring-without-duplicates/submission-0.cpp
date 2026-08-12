class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>ans(256, -1);
        int left = 0;
        int maxLen = 0;

        for(int right = 0; right <s.length(); right++){
            char ch = s[right];

            if(ans[ch] != -1){
                left = max(left, ans[ch]+1);
            }
            ans[ch] = right;
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};
