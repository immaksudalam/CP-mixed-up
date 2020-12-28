#include <bits/stdc++.h>
using namespace std;
map<long long, long long> dp;
long long f(long long n, map<long long, long long>dp)
{
    if(n==0) return 0;

    long long r = dp[n];
    if(r ==0){
        r = max(n, (f(n/2, dp)+ f(n/3, dp)+ f(n/4, dp)));
        dp[n] = r;
    }
    else return dp[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        dp.clear();
        long long n;
        cin>>n;
        dp[1]=1;
        cout<<f(n, dp)<<endl;
    }
}
