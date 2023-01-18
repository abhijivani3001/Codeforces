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
    int n;
    string s;
    cin>>n>>s;
    ll ans=0,mx=0,a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(s[i]=='1') ans+=max(mx,a[i]);
        if(s[i]=='0' or mx>a[i]) mx=a[i];
    }
    cout<<ans<<endl;
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