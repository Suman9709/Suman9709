class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        vector<pair<int, vector<int>>>distances;

        for(auto &num:points){
            int distance = num[0]*num[0] + num[1]* num[1];
            distances.push_back({distance, num});
        }
        sort(distances.begin(), distances.end());
        for(int i = 0; i<k; i++){
            ans.push_back(distances[i].second);
        }
        return ans;
    }
};
