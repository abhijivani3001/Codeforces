#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define boost ios_base::sync_with_stdio(0),cin.tie(0)
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    int p=INT_MAX,q=0,d=0,j=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i].first=x; a[i].second=y;
        p=min(p,x); q=max(q,y);
        if(y-x>=d){
            j=i;
            d=y-x;
        }
    }
    (a[j].first==p and a[j].second==q) ? cout<<j+1 : cout<<"-1";
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