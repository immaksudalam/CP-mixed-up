#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100000];
int vis[100000];
#define pb push_back
int mincos=0;
int nn=0;
int node, egde;
void dfs(int src)
{
  if(vis[src]){
    nn++;
    if(nn==node){
        cout<<mincos<<endl;
        return 0;
    }
    return;
  }
  vis[src] = 1;
  nn++;
  mincos++;
  if(nn==node){
    cout<<mincos<<endl;
    return 0;
  }
  for(auto it= adj[src].begin(); it!=adj[src].end(); it++){
    dfs(*it);
  }
  mincos++;
}

int main()
{
    cin>>node>>egde;
    for(int i=0; i<egde; i++){
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(0);

}
