class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> row;
        unordered_map<int,int> col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row[i]++;
                    col[j]++;
                }
            }
        }
    
        for(auto i:row){
            for(int k=0;k<matrix[0].size();k++) matrix[i.first][k]=0;
        }
        
        for(auto i:col){
            for(int k=0;k<matrix.size();k++) matrix[k][i.first]=0;
        }
        
    }
};
