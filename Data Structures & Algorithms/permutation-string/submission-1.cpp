class Solution {
    private:
        bool checkEqual(int a[26], int b[26]){
        for(int i = 0; i<26; i++){
            if(a[i] != b[i])
            return false;
        }
        return true;
        }
public:

    bool checkInclusion(string s1, string s2) {
        int freq1[26] = {0};
        for(int i = 0; i<s1.length(); i++){
            freq1[s1[i] - 'a']++;
        }
        int windowSize = s1.length();
        int i = 0;
        int freq2[26] = {0};
        while(i < windowSize && i<s2.length()){
            freq2[s2[i] - 'a']++;
            i++;
        }

        if(checkEqual(freq1, freq2))
        return 1;

        //next window

        while(i < s2.length()){
            int newCharInd = s2[i] - 'a';
            freq2[newCharInd]++;

            int oldCharInd = s2[i - windowSize] - 'a';
            freq2[oldCharInd]--;

            if(checkEqual(freq1, freq2)) return true;

            i++; 
        }
        return false;
    }
};
