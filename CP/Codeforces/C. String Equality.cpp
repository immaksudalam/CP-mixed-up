#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s, t;
        cin>>s>>t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t){
            cout<<"Yes"<<endl;
            continue;
        }
        vector<pair<char, int> >vs, vt;
        int cnt =1;
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                cnt++;
                continue;
            }
            else{
                vs.push_back({s[i], cnt});
                cnt=1;
            }
        }
        if(s[n-1]!= s[n-2]) vs.push_back({s[n-1], 1});
        else vs.push_back({s[n-1], cnt});
        cnt=1;
        for(int i=0; i<n-1; i++){
            if(t[i]==t[i+1]){
                cnt++;
                continue;
            }
            else{
                vt.push_back({t[i], cnt});
                cnt=1;
            }
        }
        if(t[n-1]!= t[n-2]) vt.push_back({t[n-1], 1});
        else vt.push_back({t[n-1], cnt});
        sort(vs.begin(), vs.end(), cmp);
        sort(vt.begin(), vt.end()), cmp;


    }
}
