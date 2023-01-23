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
    string s; cin>>s;
    int n; cin>>n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++) cin>>p[i].first>>p[i].second;
    int m=s.length();
    int a[m-1];
    for(int i=0;i<m-1;i++){
        if(s[i]==s[i+1]) a[i]=1;
        else a[i]=0;
    }
    int sum[m];
    sum[0]=0;
    for(int i=1;i<m;i++){
        sum[i]=a[i-1]+sum[i-1];
    }
    for(int i=0;i<n;i++) cout<<sum[p[i].second-1]-sum[p[i].first-1]<<endl;
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