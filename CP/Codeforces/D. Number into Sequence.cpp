#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<ll, int>a, pair<ll, int> b){
    return a.second > b.second;
}
int solve(ll n){
    map<ll, int>mp;
    ll temp = n;
    for(ll i=2;i*i<=temp;i+=2){
        while(n%i==0){
            mp[i]++;
            n/=i;
        }
        if(i==2)i--;
    }
    if(n>1) mp[n]++;

    vector<pair<ll, int> > v;
    for(auto it = mp.begin(); it!= mp.end(); it++){
        v.push_back({(*it).first, (*it).second});
    }
   sort(v.begin(), v.end(), cmp);
    ll ans =1;
    int k = v[0].second;
    int j = v[0].first;
    cout<<v[0].second<<endl;
    for(int i=0; i<k-1; i++){
        cout<<j<<" ";
        ans*=j;
    }
    cout<< temp/ans<<endl;
    v.clear();
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }
}
