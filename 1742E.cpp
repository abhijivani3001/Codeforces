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
    int n,q;
    cin>>n>>q;
    vector<ll> a(n+1),pref(n+1),maxi(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
        maxi[i]=max(maxi[i-1],a[i]);
    }
    for(int i=0;i<q;i++){
        ll ans=0,x;
        cin>>x;
        ll k=upper_bound(maxi.begin(),maxi.end(),x)-maxi.begin()-1;
        if(k>=0) ans=pref[k];
        cout<<ans<<" ";
    }
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