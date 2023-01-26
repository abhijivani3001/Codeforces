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
    string s; cin>>s;
    if(s[0]=='9'){
        int c=0;
        string ans;
        for(int i=n-1;i>=0;i--){
            int x=s[i]-'0';
            x+=c;
            if(x>1){
                int y=11-x;
                c=1;
                ans+=(y+'0');
            }
            else{
                c=0;
                int y=1-x;
                ans+=(y+'0');
            }
        }
        reverse(all(ans));
        cout<<ans;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<'9'-s[i];
        }
    }
    cout<<endl;
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