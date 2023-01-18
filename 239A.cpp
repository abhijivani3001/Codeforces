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
    ll y,k,n;
    cin>>y>>k>>n;
    ll temp=k;
    while(k<=y) k+=temp;
    if(k>n) cout<<"-1\n";
    else{
        ll i=k-y;
        n-=y;
        while(i<=n){
            cout<<i<<" ";
            i+=temp;
        }
    }
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