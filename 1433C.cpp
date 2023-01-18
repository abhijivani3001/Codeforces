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

int solve(){
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    int m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        m=max(m,a[i]);
    }
    if(s.size()==1) return -1;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            if((i==0 and a[i+1]<m) or (i==n-1 and a[i-1]<m)) return i+1;
            if(i!=0 and i!=n-1){
                if(a[i-1]<m or a[i+1]<m) return i+1;
            }
        }
    }
    return -1;
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