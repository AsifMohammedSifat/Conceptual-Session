/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

/*
Sample Input:
7 6
0 1
0 2
1 3
1 4
2 5
2 6

#pseudocode for dfs

void dfs(int par){
    cout<<par<<" ";
    visited[par] = true;

    for all child of par:
        if visited[child] == 0:
            dfs(child)
}

*/
#include<bits/stdc++.h>
using namespace std;

vector<int> adj_List[1000];
int visited[1000];
int depth[1000];
int height[1000];


void dfs(int par){
    cout<<par<<" ";
    visited[par] = 1;

    for(int child:adj_List[par]){
        if(visited[child]==0){
            depth[child] = depth[par] + 1;
            dfs(child);
            height[par] = max(height[par],height[child]+1);

        }
    }

}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj_List[u].push_back(v);
        adj_List[v].push_back(u);
    }
            
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<adj_List[i].size();j++){
            cout<<adj_List[i][j]<<" ";
        }
        cout<<endl;
    }

    int src = 0;

    dfs(src);

    cout<<endl<<depth[5]<<" ";
    cout<<endl<<height[src]<<" ";              
    return 0;
}
