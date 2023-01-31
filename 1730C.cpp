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
    string s; cin>>s;
    int n=s.length(),j=-1;
    char x=s[0];
    for(int i=n-1;i>0;i--){
        if(s[i-1]>s[i]){
            j=i;
            x=s[i];
            break;
        }
    }
    int m=10,k;
    for(int i=0;i<n;i++){
        m=min(m,s[i]-'0');
    }
    for(int i=0;i<n;i++){
        if(s[i]-'0'==m){
            k=i;
            break;
        }
    }
    for(int i=0;i<k;i++){
        if(s[i]!='9') s[i]++;
    }
    for(int i=j;i>k;i--){
        if(s[i]!=(m+'0')){
            if(s[i]!='9' and s[i]>x) s[i]++;
        }
        x=min(x,s[i]);
    }
    sort(all(s));
    cout<<s<<endl;
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