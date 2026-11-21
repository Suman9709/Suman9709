class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
      int m = grid.size();
      int n = grid[0].size(); 


      queue<pair<int,int>>q;
      for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(grid[i][j] == 0){
                q.push({i,j});
            }
        }
      } 

      int direction[4][2] = {
        {-1,0},
        {1,0},
        {0, -1},
        {0,1}
      };

      while(!q.empty()){
        auto[row,col] = q.front();
        q.pop();

        for(int k = 0; k<4; k++){
            int newRow = row+direction[k][0];
            int newCol = col+direction[k][1];


            if(newRow >=0 && newRow<m && newCol>=0 && newCol < n && 
            grid[newRow][newCol] == INT_MAX){
                grid[newRow][newCol] = grid[row][col]+1;
                q.push({newRow, newCol});
            }
        }
      }
    }
};
