#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        ll sum =0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+= arr[i];
        }
        vector<ll>factor;
        for(int i=1; i<=sqrt(sum); i++){
            if(sum%i==0){
                if(sum/i== i)factor.push_back(i);
                else factor.push_back(i), factor.push_back(sum/i);
            }
        }
        vector<ll>ans;
        for(int j=0; j<factor.size(); j++){
            ll cur = factor[j];
            int temp=0;
            ll tempsum = arr[0];
            bool flag = true;
            for(int i=1; i<n; i++){
                if(tempsum == cur){
                    tempsum = arr[i];
                }
                else if((tempsum > cur)){
                    flag = false;
                    break;
                }
                else{
                    tempsum+= arr[i];
                    temp++;
                }
            }
           // if(flag) cout<<cur<<" "<<temp<<endl;
            if(cur != tempsum) flag  = false;
            if(flag){
                ans.push_back(temp);

            }
        }
        sort(ans.begin(), ans.end());
        cout<<ans[0]<<endl;
    }
}
