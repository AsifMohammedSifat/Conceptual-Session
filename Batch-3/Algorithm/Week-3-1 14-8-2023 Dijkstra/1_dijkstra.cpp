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
#include <bits/stdc++.h>
using namespace std;

/*
  5 6
            1 2 2
            2 5 5
            2 3 4
            1 4 1
            4 3 3
            3 5 1
*/

const int N = 1e5 + 5;
const long long int INF = 1e18;

vector<pair<int, int>> adj[N];
long long int d[N];
bool visited[N];
int parent[N];
int nodes, edges;

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }

    d[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({d[src], src});

    while (!pq.empty())
    {
        pair<int, int> f = pq.top();
        pq.pop();

        int selectedNode = f.second;

        if (visited[selectedNode])
            continue;
        visited[selectedNode] = true;

        for (auto child : adj[selectedNode])
        {
            int edgeCost = child.first;
            int v = child.second;

            if (d[selectedNode] + edgeCost < d[v])
            {
                d[v] = d[selectedNode] + edgeCost;
                pq.push({d[v], v});
                parent[v] = selectedNode;
            }
        }
    }
}

int main()
{
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    int src = 1;

    dijkstra(src);

    if(!visited[nodes]){
        cout<<-1<<endl;
        return 0;
    }
    // for(int i=1;i<=nodes;i++){
    //     cout<<d[i]<<" ";
    // }

    int current = nodes;
    vector<int> paths;

    while (true)
    {
        paths.push_back(current);
        if (current == src)
        {
            break;
        }
        current = parent[current];
    }

    reverse(paths.begin(),paths.end());

    for(int val:paths){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
