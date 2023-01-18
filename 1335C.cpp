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
    int a[n];
    unordered_map<int,int> m;
    int x=0,y=0,key=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        x=max(x,m[a[i]]);
    }
    y=m.size();
    cout<<max(min(x-1,y),min(x,y-1))<<endl;
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