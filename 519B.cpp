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
    unordered_map<int,int> m,temp;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        m[x]++;
        temp[x]++;
    }
    for(int i=0;i<n-1;i++){
        int x; cin>>x;
        m[x]--;
        if(!m[x]) m.erase(x);
    }
    auto it=m.begin();
    cout<<it->first<<endl;
    temp[it->first]--;
    if(!temp[it->first]) temp.erase(it->first);
    for(int i=0;i<n-2;i++){
        int x; cin>>x;
        temp[x]--;
        if(!temp[x]) temp.erase(x);
    }
    auto it2=temp.begin();
    cout<<it2->first<<endl;
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