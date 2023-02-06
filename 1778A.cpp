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
    int n; cin>>n;
    vi a(n);
    int l=0,m=0,sum=0;
    for(auto &i:a){
        cin>>i;
        if(i==-1){
            l++;
            m=max(m,l);
        }
        else l=0;
        sum+=i;
    }
    if(m==0) cout<<sum-4<<endl;
    else if(m>=2) cout<<sum+4<<endl;
    else cout<<sum<<endl;
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