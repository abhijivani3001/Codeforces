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
    int i=1,j=0,k=1;
    while(i<n){
        j=(j+1)%5;
        if(!j) k*=2;
        i+=k;
    }
    if(j==0) cout<<"Sheldon\n";
    if(j==1) cout<<"Leonard\n";
    if(j==2) cout<<"Penny\n";
    if(j==3) cout<<"Rajesh\n";
    if(j==4) cout<<"Howard\n";
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