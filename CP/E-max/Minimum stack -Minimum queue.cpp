#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    deque<int>q;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int mini = INT_MAX;
    for(i=0; i<m; i++){
        mini = min(mini, arr[i]);
        q.push_back(arr[i]);
    }
    vector<int>ans;
    ans.push_back(mini);
    for(; i<n; i++){
        q.pop_front();
        q.push_back(arr[i]);
        ans = mini()
    }

}
