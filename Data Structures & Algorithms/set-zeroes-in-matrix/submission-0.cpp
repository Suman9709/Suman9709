class Solution {
private:
void markRow(vector<vector<int>>& matrix,int i, int col){
    for(int j = 0; j<col; j++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>>& matrix, int j, int rows ){
    for(int i = 0; i<rows; i++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();

      for(int i = 0; i<rows;i++){
        for(int j = 0; j<col; j++){
            if(matrix[i][j] == 0){
                markRow(matrix, i, col);
                markCol(matrix, j, rows);
            }
        }
      }
      for(int i = 0; i<rows; i++){
        for(int j = 0; j<col; j++){
           if(matrix[i][j] == -1)
           matrix[i][j] = 0;
        }
      }
    }
};
