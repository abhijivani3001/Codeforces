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
    int n=s.length();
    set<char> st;
    bool flag=true;
    int i;
    for(i=0;i<n;i++){
        if(st.find(s[i])==st.end()) st.insert(s[i]);
        else break;
    }
    for(int j=i;j<n;j++){
        if(s[j]!=s[j-i]){
            flag=false; break;
        }
    }
    cout<<(flag ? "YES\n" : "NO\n");
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