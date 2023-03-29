#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;

vector<int> adjList[N];
int visited[N];
int parent[N];

int st,ed;


bool detect_cycle(int src){
    visited[src] = 1;

    for(int adj_node : adjList[src]){
        if(adj_node==parent[src]){
            continue;
        }
        if(visited[adj_node]==0){

            parent[adj_node] = src;

            bool ok = detect_cycle(adj_node);
            if(ok){
                return true;
            }
        }
        if(visited[adj_node]==1){
            st = src;
            ed = adj_node;
            return true;
        }
    }

    visited[src] = 2;
    return false;

}

int main(){
    int node,edge;
    cin>>node>>edge;

    while(edge--){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool cycle = false;

    for(int i=1;i<=node;i++){
        if(visited[i]==0){
            bool ok = detect_cycle(i);
            if(ok){
                cycle = true;
                break;
            }
        }
    }
    if(cycle){
       vector<int>cities;
       int temp = st;
       
       cities.push_back(st);

       while(temp!=ed){
        cities.push_back(parent[temp]);
        temp = parent[temp];
       }
       
       cities.push_back(st);

       cout<<cities.size()<<endl;

       for(auto city:cities){
        cout<<city<<" ";
       }
    }
    else{
        cout<<"IMPOSSIBLE\n";
    }

}
