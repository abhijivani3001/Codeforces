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

ll lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}

string solve(){
    int n; cin>>n;
    vi a(n+2,1),b(n+2,1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n+1;i++) b[i]=lcm(a[i],a[i-1]);
    for(int i=1;i<=n;i++){
        if(__gcd(b[i],b[i+1])!=a[i]) return "NO";
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