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
    vi a;
    int ct=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x<0) ct++;
        a.push_back(abs(x));
    }
    sort(all(a));
    for(int i=1;i<n;i++) sum+=a[i];
    if(ct%2) sum-=abs(a[0]);
    else sum+=abs(a[0]);
    cout<<sum<<endl;
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