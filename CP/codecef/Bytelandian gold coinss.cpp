#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, ll>dp;
ll f(ll n)
{
    if(n==0) return 0;
    if(dp[n] != 0) return dp[n];
    dp[n] = max(n, f(n/2)+f(n/3)+ f(n/4));
    return dp[n];
}
int main()
{
   ll n;
   dp[1]=1;
    while(cin>>n){
        cout<<f(n)<<endl;
    }
}
