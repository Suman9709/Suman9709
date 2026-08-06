class Solution {
public:
    bool isPalindrome(string s) {
        // filter the unwanted character 
        // compare the character in lowercase

        int start = 0;
        int end = s.length()-1;

        while(start<end){
            while(start < end && !isalnum(s[start])) start++;
            while(start <end && !isalnum(s[end])) end--;

            if(tolower(s[start]) != tolower(s[end])) return false;

            start++;
            end--;
        }
        return true;
    }
};
