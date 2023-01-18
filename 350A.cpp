#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define boost ios_base::sync_with_stdio(0),cin.tie(0)
#define endl '\n'

void solve(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m],x=0,y=INT_MAX,z=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x=max(a[i],x);
        y=min(a[i],y);
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        z=min(b[i],z);
    }
    int ans=max(x,2*y);
    (ans<z) ? cout<<ans : cout<<"-1";
}

int main(){
    boost;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}