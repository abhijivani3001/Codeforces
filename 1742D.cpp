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
    int n,x;
    cin>>n;
    int a[n],m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(m,a[i]);
    }
    int p[m+1]={0};
    for(int i=0;i<n;i++){
        p[a[i]]=i+1;
    }
    int sum=0;
    for(int i=m;i>=0;i--){
        for(int j=i;j>=0;j--){
            if(p[i] and p[j] and __gcd(i,j)==1){
                sum=max(sum,p[i]+p[j]);
            }
        }
    }
    cout<<((sum) ? sum : -1)<<endl;
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