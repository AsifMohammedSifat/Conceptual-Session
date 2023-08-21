////https://ideone.com/8J6u4A

class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int,int>>q;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                }
            }
        }

        if(q.size()==0 || q.size()==row*col) return -1;

        vector<pair<int,int>>dir = {{0,1},{0,-1},{1,0},{-1,0}};
        // int dir[4][4]={{0,1},{1,0},{0,-1},{-1,0}};
        int level = -1;

        while(!q.empty()){
          level++;
          int times = q.size();
          
          while(times--){
            auto f = q.front();
            q.pop();
            
            int i = f.first;
            int j = f.second;


            for(auto dr:dir){
                int ni = i + dr.first;
                int nj = j + dr.second;

                if(ni<0 or nj<0 or ni>=grid.size() or nj>=grid[0].size() or grid[ni][nj]==1){
                    continue;
                }
                q.push({ni,nj});
                grid[ni][nj] = 1;
            }
          }
        }
        return level;
    }
};
