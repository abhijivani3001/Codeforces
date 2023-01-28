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
    vector<vi> v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
    }
    vi ans;
    int key,j;
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i][0]]++;
    }
    auto it1=m.begin(),it2=(--m.end());
    if(it1->second==1) key=it1->first;
    else key=it2->first;
    for(int i=0;i<n;i++){
        if(key==v[i][0]){
            j=i; break;
        }
    }
    for(int i=n-2;i>=0;i--){
        ans.push_back(v[j][i]);
    }
    unordered_set<int> s;
    for(int i=1;i<=n;i++) s.insert(i);
    for(int i=0;i<n-1;i++){
        s.erase(ans[i]);
    }
    auto it=s.begin();
    ans.push_back(*it);
    reverse(all(ans));
    for(auto i:ans) cout<<i<<" ";
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