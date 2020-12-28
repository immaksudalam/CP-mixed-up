#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
ordered_set s;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        for(int i=0; i<n; i++){
            unordered_map<int, int>fre;

            for(int j=i; j<n; j++){
                int m = ceil((double)k/ (j-i+1));
                int k1 = ceil((double)k/m);
                k1--; // for 0 based indexing

                s.insert();
                auto it = s.find_by_order(k1);
                int element = (*it).first;

            }
        }
    }
}
