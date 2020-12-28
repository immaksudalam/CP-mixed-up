#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<int, int> mp;
        int arr[n];
        int ar[n];
        for(int i=0; i<n; i++) {
                cin>>arr[i];
                ar[i]=arr[i];
                mp[arr[i]]++;
        }
        sort(arr, arr+n);
        int t;
        bool ans = false;
        for(int i=0; i<n; i++){
            if(mp[arr[i]] ==1){
                t = arr[i];
                ans = true;
                break;
            }
        }
        if(ans)for(int i=0; i<n; i++){
            if(ar[i]==t){
                cout<<i+1<<endl;
                break;
            }
        }
        if(!ans) cout<<-1<<endl;
    }


}
