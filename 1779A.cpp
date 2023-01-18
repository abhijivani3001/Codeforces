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
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if((st.size() and st.top()!=s[i]) or !st.size()) st.push(s[i]);
    }
    if(st.size()==1) return -1;
    else if(st.size()>2) return 0;
    else{
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='L' and s[i+1]=='R') return i+1;
            else if(s[i]=='R' and s[i+1]=='L') return 0;
        }
        return 0;
    }
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