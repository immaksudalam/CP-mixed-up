#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector <ll>v;
    ll ans =0;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        auto it = upper_bound(v.begin(), v.end(), x);
        if(it!= v.end()){
            ans+= v.end()- (it);
            v.insert(it, x);
        }
        else v.push_back(x);
    }
    cout<<ans<<endl;
}
