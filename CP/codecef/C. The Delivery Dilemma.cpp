#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int> >vp;
        vector<int>v1(n), v2(n);
        for(int i=0; i<n; i++) cin>>v1[i];
        for(int i=0; i<n; i++) cin>>v2[i];
        for(int i=0; i<n; i++) vp.push_back({v1[i], v2[i]});
        sort(vp.begin(), vp.end());
        int ans = vp[n-1].first;
        bool f = false;
        int sufsum=0;
        for(int i= n-1; i>=0; i--){
            if(sufsum + vp[i].second < ans){
                sufsum += vp[i].second;
                if(i!=0) ans = vp[i-1].first;
                if(i==0) ans = sufsum;
            }
            else{
                ans = max(sufsum, ans);
                f = true;
                break;
            }
        }
        cout<<ans<<endl;

    }
}
