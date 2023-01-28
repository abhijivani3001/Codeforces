#include<bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD1 1000000007
#define MOD2 998244353
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

void solve(){
    int n,q; cin>>n>>q;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(all(v),greater<int>());
    vi temp(n);
    temp[0]=v[0];
    for(int i=1;i<n;i++) temp[i]=temp[i-1]+v[i];
    while(q--){
        int x; cin>>x;
        auto it=lower_bound(temp.begin(),temp.end(),x);
        if(it!=temp.end()) cout<<it-temp.begin()+1<<endl;
        else cout<<"-1\n";
    }
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