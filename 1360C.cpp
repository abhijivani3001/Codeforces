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
    int odd=0,even=0;
    for(auto &i:a){
        cin>>i;
        if(i%2) odd++;
        else even++;
    }
    if(!(odd%2)){
        cout<<"YES\n";
        return;
    }
    sort(all(a));
    for(int i=0;i<n-1;i++){
        if(a[i]+1==a[i+1]){
            if((a[i]%2 and !(a[i+1]%2)) or (a[i+1]%2 and !(a[i]%2))){
                cout<<"YES\n";
                return;
            }
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