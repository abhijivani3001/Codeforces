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
    cin>>n;
    string s; cin>>s;
    vll v;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            v.push_back((n-1-i)-i);
            sum+=i;
        }
        else if(s[i]=='R'){
            v.push_back(i-(n-1-i));
            sum+=n-1-i;
        }
    }
    sort(all(v),greater<ll>());
    for(auto i:v){
        if(i>0) sum+=i;
        cout<<sum<<" ";
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