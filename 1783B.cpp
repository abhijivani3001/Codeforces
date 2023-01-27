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
    int x=pow(n,2);
    int a[n][n];
    int m=x/2+x%2;
    int b[m];
    for(int i=0;i<m;i++) b[i]=i+1;
    m=x/2;
    int c[m];
    for(int i=0;i<m;i++) c[i]=x-i;
    if(!(n%2)){
        int j=n/2,k=1;
        for(int i=0;i<m;i+=(n/2)){
            if(k%2) reverse(c+i,c+j);
            if(k%2) reverse(b+i,b+j);
            k++;
            j+=n/2;
        }
    }
    int k=0,l=0;
    int p=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p%2) a[i][j]=b[k++];
            else a[i][j]=c[l++];
            p++;
        }
    }
    if(!(n%2)){
        for(int i=0;i<n;i+=2){
            for(int j=0;j<n;j+=2){
                swap(a[i][j+1],a[i][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
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