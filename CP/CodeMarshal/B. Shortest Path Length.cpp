#include <bits/stdc++.h>
using namespace std;
#define mx 200000
vector<int>graph[mx];
int visited[mx];
int level[mx];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;
    level[src]=0;
    while(!q.empty()){
        int u = q.front();
        for(int i=0; i< graph[u].size(); i++){
            int v = graph[u][i];
            if(!visited[v]){
                level[v]=level[u]+1;
                visited[v]=1;
                q.push(v);
            }
        }
        q.pop();
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int node, edge; cin>>node>>edge;
    for(int i=0; i<edge; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        graph[u].push_back(v);
    }
    bfs(0);
    for(int i=0; i<node; i++){
        if(visited[i]==1)printf("%d: %d\n", i, level[i]);
        else printf("%d: Not Reachable\n", i);
    }
}
