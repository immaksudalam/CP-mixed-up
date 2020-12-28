#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n, a, b; cin>>n>>a>>b;
        int both=0, bob=0, alice=0;
        for(int i=0; i<n; i++){
            long long x;
            cin>> x;
            if(x%a==0 && x%b==0) both++;
            else if(x%a==0) bob++;
            else if(x%b==0) alice++;
        }
        if(both&1)bob++;
        if(bob>= alice) cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;
    }
}
