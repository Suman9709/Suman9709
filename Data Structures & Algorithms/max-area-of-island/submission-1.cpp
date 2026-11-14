class Solution {
private:
int dfs(vector<vector<int>>& grid, int row, int col){
    int n = grid.size();
    int m = grid[0].size();

    if(row < 0 || col < 0 || row >=n || col>=m || grid[row][col] == 0){
        return 0;
    }

    grid[row][col] = 0;
    int area = 1;

    area+=dfs(grid, row-1,col); //up
    area+=dfs(grid, row+1,col); //down
    area+=dfs(grid, row, col-1); // left
    area+=dfs(grid, row, col+1); // right

    return area;
}
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int maxArea = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 1){
                    int area = dfs(grid, i,j);
                    maxArea = max(area, maxArea);
                }
            }
        }
        return maxArea;
    }
};
