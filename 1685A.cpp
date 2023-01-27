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
    vi v(n);
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(n%2){
        cout<<"NO\n";
        return;
    }
    int x=-1;
    for(auto i:m){
        if(i.second>n/2){
            cout<<"NO\n";
            return;
        }
        if(i.second==n/2) x=i.first;
    }
    sort(all(v));
    if(x!=-1){
        if(x!=v[0] and x!=v[n-1]){
            cout<<"NO\n";
            return;
        }
    }
    int i=0,j=n/2,k=1;
    cout<<"YES\n";
    while(k<=n){
        if(k%2) cout<<v[i++]<<" ";
        else cout<<v[j++]<<" ";
        k++;
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