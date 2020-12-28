#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        int c=0, d=0;
        for(int i=0; i<n; i++){
            if(a[i]> b[i]) c++;
            else if(b[i]> a[i]) d++;
        }
        if(c>d){
            cout<<"RED"<<endl;
        }
        else if(d>c) cout<<"BLUE"<<endl;
        else cout<<"EQUAL"<<endl;
    }
}
