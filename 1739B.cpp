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
    int d[n];
    for(int i=0;i<n;i++) cin>>d[i];
    int a[n];
    a[0]=d[0];
    bool flag=true;
    for(int i=1;i<n;i++){
        if(d[i]<=a[i-1] and d[i]!=0){
            cout<<"-1\n";
            flag=false;
            break;
        }
        a[i]=a[i-1]+d[i];
    }
    if(flag){
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
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