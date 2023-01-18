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
    ll sum=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    cout<<((sum%200 or (n%2 and sum==n*200)) ? "NO" : "YES");
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