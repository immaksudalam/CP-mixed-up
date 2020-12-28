#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        deque<int>q;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            q.push_back(a);
        }
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop_front();
            if(!q.empty()){
                cout<<q.back()<<" ";
                q.pop_back();
            }
        }
        cout<<endl;
    }
}
