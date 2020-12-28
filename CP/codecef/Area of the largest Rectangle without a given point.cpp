#include <bits/stdc++.h>
using namespace std;
int main()
{
    int L, B;
    cin>>L>>B;
    int n;
    n=1;
    pair<int, int> arr[n];
    for(int i=0; i<n; i++) cin>>arr[i].first>>arr[i].second;
    //logic
    sort(arr,arr+n);
    stack<pair<int, int>>st;
    int rb[n], lb[n];
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top().first > arr[i].second){
            pair<int, int> element = st.top();
            st.pop();
            rb[element.second] = arr[i].first-1;
        }
        st.push({arr[i].second, i});
    }
    // stack is not necessarily empty right now
    // all of the elements that are still inside the stack are not bounded by  a point, the are bounded by the plan
    while(!st.empty()){
        pair<int, int> element = st.top();
        st.pop();
        rb[element.second] = L;
    }
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top().first > arr[i].second){
            pair<int, int> element = st.top();
            st.pop();
            lb[element.second]=arr[i].first-1;
        }
        st.push({arr[i].second, i});
    }
    // stack is not necessarily empty right now
    // all of the elements that are still inside the stack are not bounded by  a point, the are bounded by the plan
    while(!st.empty()){
        pair<int, int> element = st.top();
        st.pop();
        lb[element.second] = 0;
    }
    int ans =0;
    for(int i=0; i<n; i++){
        int left = lb[i];
        int right = rb[i];
        int height = arr[i].second;
        int width = rb[i] - lb[i];
        ans = max(ans, height * width);
    }
    ans = max(ans, B*(arr[0].first)-1);
    for(int i=0; i<n-1; i++){
        int dist = arr[i+1].first - arr[i].first; // the distance between consecutive elements
        ans = max(ans, B*dist); // the top edge as the top of the plane (height 500) and the weight as the distance between that point

    }
    ans = max(ans, (L- (arr[n-1].first)-1)*B); // the distance between the right edge of the plan and last point

    cout<<ans<<endl;

}

