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
    int w,h,n;
    cin>>w>>h>>n;
    ll ans=1;
    while(!(w%2)){
        ans*=2;
        w/=2;
    }
    while(!(h%2)){
        ans*=2;
        h/=2;
    }
    cout<<((ans>=n) ? "YES\n" : "NO\n");
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