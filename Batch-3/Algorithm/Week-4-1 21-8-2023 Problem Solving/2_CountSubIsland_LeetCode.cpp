class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int flag,ans=0;
        for(int i=0;i<grid2.size();i++){
            for(int j=0;j<grid2[0].size();j++){
                if(grid2[i][j]==1 and grid2[i][j]==grid1[i][j]){
                    flag = 1;
                    dfs(grid1,grid2,i,j,flag);
                    ans+=flag;
                }
            }
        }
        return ans;
        
    }

    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j,int &flag){
        if(i>=0 and j>=0 and i<grid2.size() and j<grid2[0].size()and grid2[i][j]==1){
            grid2[i][j] = 2;

            if(grid1[i][j]==0) flag = 0;

            dfs(grid1,grid2,i,j+1,flag);
            dfs(grid1,grid2,i,j-1,flag);
            dfs(grid1,grid2,i+1,j,flag);
            dfs(grid1,grid2,i-1,j,flag);
        }
    }
};
