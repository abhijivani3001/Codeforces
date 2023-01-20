#include<bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD1 1000000007
#define MOD2 998244353
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

void solve(){
    ll n,l,r;
    cin>>n>>l>>r;
    vll v;
    for(int i=1;i<=n;i++){
        ll j=(l+i)-(l+i)%i;
        if(!(l%i)) j=l;
        if(j>r){
            cout<<"NO\n";
            return;
        }
        v.push_back(j);
    }
    cout<<"YES\n";
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}

int main(){
    boost;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}