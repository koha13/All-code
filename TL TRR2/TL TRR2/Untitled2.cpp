#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
using namespace std;
int N
bool bfs(int rGraph[][1000], int s, int t, int p[]){
    bool visited[1000];
    memset(visited, 0, sizeof(visited));
    queue <int> q;
    q.push(s);
    visited[s] = true;
    p[s] = -1;
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v=0; v<N; v++){
            if (visited[v]==false && rGraph[u][v] > 0){
                q.push(v);
                p[v] = u;
                visited[v] = true;
            }
        }
    }
    return (visited[t] == true);
}
int fordFulkerson(int graph[][1000], int s, int t)
{
    int u, v;
    int rGraph[1000][1000]; 
    for (u = 0; u < N; u++)
        for (v = 0; v < N; v++)
             rGraph[u][v] = graph[u][v];
    int p[N];
    int max_flow = 0;
    while (bfs(rGraph, s, t, p)){
        int path_flow = INT_MAX;
        for (v=t; v!=s; v=p[v]){
            u = p[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }
        for (v=t; v != s; v=p[v]){
            u = p[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;
}
int main()
{
    int graph[1000][1000],s,t;
    cin>>N;
    for(int i=0;i<N;i++)
    	for(int j=0;j<N;j++) cin>>graph[i][j];
    cin>>s>>t;
    cout << "Luong cuc dai la: " << fordFulkerson(graph, s, t);
    return 0;
}
