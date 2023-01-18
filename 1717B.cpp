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
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    int x=n/k;
    if(r>k) r%=k;
    if(c>k) c%=k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j+2)%k==(r+c)%k) cout<<'X';
            else cout<<'.';
        }
        cout<<endl;
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