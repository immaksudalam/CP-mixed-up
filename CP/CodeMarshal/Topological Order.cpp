/*
    --> topological sort possible in Directed acyclic graph.
    there are two ways to find topological sort.
       1) using starting time & finishing time to visit a node, take node regarding to its finishing node
          which finishing time is larger take first.
       2) using stack. when a node complete to visit all of his adjacency nodes, then put this
          in stack. finally the topological sorted order is to output the stack in regular manner.
*/
#include <bits/stdc++.h>
using namespace std;
#define mx 300000
vector<int>graph[mx];
int visited[mx];
stack<int>st;
void dfs(int src)
{
    visited[src]=1;
    for(int i=0; i<graph[src].size(); i++){
        int v = graph[src][i];
        if(!visited[v]) dfs(v);
    }
    st.push(src); // 0 indexing
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int node, edge;
    cin>>node>>edge;
    int u, v;
    for(int i=0; i<edge; i++){
         scanf("%d%d", &u, &v);
         //u--, v--; // 0 indexing
         graph[u].push_back(v);
    }
    for(int i=0; i<node; i++){
        if(!visited[i]) dfs(i);
    }
   // cout<<"The order after topological sort "<<endl;
    while(!st.empty()){
        printf("%d\n", st.top());
        st.pop();
    }
}
