class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      vector<int>ans;
        int n = digits.size()-1;
      for(int i = n; i>=0; i--){
        if(digits[i] != 9){
            digits[i]+=1;
            break;
        }
        digits[i] = 0;
      } 
      if(digits[0] == 0){
        ans.push_back(1);
      } 

      for(int i = 0; i<digits.size(); i++){
        ans.push_back(digits[i]);
      }
    return ans;
    }
};
