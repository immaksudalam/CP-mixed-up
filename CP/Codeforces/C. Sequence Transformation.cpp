#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        vector<int> v;
        v.push_back(arr[0]);
        for(int i=1; i<n; i++){
            if(arr[i]==arr[i-1])continue;
            else v.push_back(arr[i]);
        }
        map<int, int>mp;
        for(int i=0; i<v.size(); i++){
            mp[v[i]]++;
        }

        mp[v[0]]--;
        mp[v[v.size()-1]]--;
        int ans = INT_MAX;
        for(auto it=mp.begin(); it!= mp.end(); it++){
            int t =(*it).second +1;
            ans = min(ans, t);
        }
        cout<<ans<<endl;
    }
}
