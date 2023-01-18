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
    ll l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b) cout<<"0\n";
    else if((abs(a-l)<x and abs(a-r)<x) or (abs(b-l)<x and abs(b-r)<x)) cout<<"-1\n";
    else{
        if(abs(a-b)>=x) cout<<"1\n";
        else if((a<b and (abs(a-l)>=x or abs(b-r)>=x)) or (a>b and (abs(b-l)>=x or abs(a-r)>=x))) cout<<"2\n";
        else cout<<"3\n";
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