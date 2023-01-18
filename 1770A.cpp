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
    int n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    ll sum=0;
    for(int i=0;i<m;i++){
		int temp;
		ll x=INT_MAX;
		for(int i=0;i<n;i++){
			if(a[i]<x){
				temp=i;
				x=a[i];
			}
		}
		a[temp]=b[i];
	}
    for(int i=0;i<n;i++) sum+=a[i];
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