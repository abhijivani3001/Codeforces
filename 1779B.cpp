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
    if(n==3) cout<<"NO\n";
    else{
        cout<<"YES\n";
        if(n%2){
            int a=n/2-1,b=-(a+1);
            for(int i=1;i<=n/2;i++) cout<<a<<" "<<b<<" ";
            cout<<a;
        }
        else{
            for(int i=1;i<=n/2;i++) cout<<"1 -1 ";
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