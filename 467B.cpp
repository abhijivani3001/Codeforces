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
    int n,m,k; cin>>n>>m>>k;
    vll v(m+1);
    for(auto &i:v) cin>>i;
    int ans=0,key=v[m];
    for(int i=0;i<m;i++){
        int temp=key^v[i];
        int j=1;
        while(j<=temp) j*=2;
        j/=2;
        int count=0;
        while(temp){
            if(j<=temp){
                temp-=j;
                count++;
            }
            j/=2;
        }
        if(count<=k) ans++;
    }
    cout<<ans<<endl;
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