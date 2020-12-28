#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        array<int, 27> have{}, need{};
        for(int i=0; i<a.size(); i++){
            have[a[i]-'a']++;
        }
        for(int i=0; i<b.size(); i++){
            need[b[i]-'a']++;
        }
        bool ans = false;
        for(int i=0; i<27; i++){
            if(have[i] < need[i] || ((have[i] = have[i]- need[i])%k)){
                ans = true;
            }
            have[i+1] += have[i];
        }
        if(ans) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
