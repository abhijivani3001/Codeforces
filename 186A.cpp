#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define boost ios_base::sync_with_stdio(0),cin.tie(0)
#define endl '\n'

string solve(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length(),m=s2.length();
    if(n!=m) return "NO";
    int count=0,j,k;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            count++;
            if(count==1) j=i;
            else if(count==2) k=i;
            else return "NO";
        }
    }
    if(s1[k]==s2[j] and s1[j]==s2[k]) return "YES";
    return "NO";
}

int main(){
    boost;
    int t=1;
    // cin>>t;
    while(t--){
        cout<<solve();
    }
    return 0;
}