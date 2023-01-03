class Solution {
public:
    int dp[101][101];
    int uniquePaths(int n, int m) { 
       
        dp[0][0]=1;
        
        //col fill
        for(int i=1;i<n;i++){
            dp[i][0]=1;
        }
        
        //row fill
        for(int i=1;i<m;i++){
            dp[0][i]=1;
        }
        
        //grid fill
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        
        return dp[n-1][m-1];
        
        
    }
};
