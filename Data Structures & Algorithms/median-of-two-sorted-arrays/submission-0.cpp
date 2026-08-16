class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>median;
        
        for(int i = 0; i<nums1.size(); i++){
            median.push_back(nums1[i]);
        }
        for(int i = 0; i<nums2.size(); i++){
            median.push_back(nums2[i]);
        }
        sort(median.begin(), median.end());
        int n = median.size();
        double ans = 0;
        
            if(n%2 == 1){
                ans=median[n/2];
            }
            else{
                ans= (median[n/2 -1 ] + median[(n/2)])/2.0;
            }
        return ans;
    }
};
