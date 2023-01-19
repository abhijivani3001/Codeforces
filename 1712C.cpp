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
    int n,j=-1;
    cin>>n;
    pair<int,int> a[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a[i].first=x; a[i].second=1;
        m[x]=1;
    }
    for(int i=n-1;i>0;i--){
        if(a[i-1].first>a[i].first){
            j=i-1;
            break;
        }
    }
    if(j==-1) cout<<"0\n";
    else{
        for(int i=0;i<=j;i++){
            a[i].second=0;
            m[a[i].first]=0;
        }
        for(int i=n-1;i>j;i--){
            if(m[a[i].first]==0){
                j=i;
                break;
            }
        }
        for(int i=j;i>=0;i--) m[a[i].first]=0;
        int count=0;
        for(auto i:m){
            if(!(i.second)) count++;
        }
        cout<<count<<endl;
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