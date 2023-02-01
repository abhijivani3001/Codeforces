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
    int n,m; cin>>n>>m;
    vi a(n);
    unordered_map<int,int> mp;
    for(auto &i:a){
        cin>>i;
        mp[i]++;
    }
    unordered_map<int,int> x;
    for(int i=0;i<n;i++){
        x[i+1]=mp.size();
        mp[a[i]]--;
        if(!mp[a[i]]) mp.erase(a[i]);
    }
    for(int i=0;i<m;i++){
        int v; cin>>v;
        cout<<x[v]<<endl;
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