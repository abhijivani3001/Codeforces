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
    vi odd;
    vi even;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x%2) odd.push_back(i);
        else even.push_back(i);
    }
    if(odd.size()>=3){
        cout<<"YES\n";
        cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
    }
    else if(!odd.size()) cout<<"NO\n";
    else if(odd.size()==1){
        cout<<"YES\n";
        cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
    }
    else if(odd.size()==2){
        if(even.size()>=2){
            cout<<"YES\n";
            cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
        }
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
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