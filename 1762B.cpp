#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define boost ios_base::sync_with_stdio(0),cin.tie(0)
#define endl '\n'

ll fun(ll x){
    ll i=1;
    while(i<=x) i*=2;
    return i;
}

void solve(){
    int n;
    cin>>n;
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        ll x; cin>>x;
        cout<<i<<" "<<fun(x)-x<<endl;
    }
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}