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
    string s; cin>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U') y++;
        if(s[i]=='D') y--;
        if(s[i]=='R') x++;
        if(s[i]=='L') x--;
        if(x==1 and y==1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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