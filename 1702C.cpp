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
    string s; getline(cin,s);
    int n,k; cin>>n>>k;
    vi v;
    map<int,pii> m;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(!m.count(x)){
            m[x].first=i; m[x].second=i;
        }
        else m[x].second=i;
    }
    for(int i=0;i<k;i++){
        int a,b; cin>>a>>b;
        if(!m.count(a) or !m.count(b) or m[b].second<m[a].first) cout<<"NO\n";
        else cout<<"YES\n";
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