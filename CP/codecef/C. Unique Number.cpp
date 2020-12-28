#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>45){
            cout<<-1<<endl;
            continue;
        }
        vector<int> v;
        int cur = 9;
        while(n>0){
            if(n<=cur){
                v.push_back(n);
                n=0;
            }
            else{
                n-=cur;
                v.push_back(cur);
                cur--;
            }
        }
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
       }cout<<endl;
    }
}
