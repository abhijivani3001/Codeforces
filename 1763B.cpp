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

string solve(){
    int n,k;
    cin>>n>>k;
    pair<ll,ll> p[n];
    ll m=0,sum=k,x;
    for(int i=0;i<n;i++){
        cin>>x;
        p[i].second=x;
        m=max(m,x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        p[i].first=x;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        ll h=p[i].second;
        h-=sum;
        while(h>0){
            k-=p[i].first;
            if(k<=0) return "NO";
            h-=k;
            sum+=k;
        }
    }
    return "YES";
}

int main(){
    boost;
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}