class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
       queue<pair<int,int>>q;
        int fresh = 0;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 1){
                    fresh++;
                }
                else if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        if(fresh == 0) return 0;

        int direction[4][2] = {
            {-1,0},
            {1,0},
            {0,-1},
            {0, 1}
        };

        int min = 0;
        while(!q.empty()){
            int size = q.size();
            bool rotten = false;

            while(size-- ){
                auto[row,col] = q.front();
                q.pop();
                for(int k = 0; k<4; k++){
                    int newRow = row+direction[k][0];
                    int newCol = col+direction[k][1];

                    if(newRow >= 0 && newRow<m &&
                        newCol>=0 && newCol < n &&
                        grid[newRow][newCol] == 1){
                            grid[newRow][newCol] = 2;
                            fresh--;
                            q.push({newRow, newCol});
                            rotten = true;
                        }
                }
            }
            if(rotten) min++;


        }
        if(fresh > 0) return -1;

        return min;

    }
};
