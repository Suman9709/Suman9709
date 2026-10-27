class Solution {
private:
void func(int open, int close, int n, vector<string>& ans, string& s){
    if(open == n && close == n){
        ans.push_back(s);
        return;
    }
    if(open < n){
        s.push_back('(');
        func(open+1, close, n, ans, s);
        s.pop_back();
    }
    
    if(close < open){
        s.push_back(')');
        func(open, close+1, n, ans, s);
        s.pop_back();
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        func(0,0,n,ans,s);
        return ans;
    }
};
