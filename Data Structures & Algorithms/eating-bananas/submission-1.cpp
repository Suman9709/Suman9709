class Solution {
    private:
    int time(vector<int>& piles, int h){
        int totalhr = 0;
        for(int i = 0; i<piles.size(); i++){
            totalhr += (piles[i] + h - 1) / h;

        }
        return totalhr;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;

            int totalhrs = time(piles, mid);
            if(totalhrs <= h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
