#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int key=1;
    if(n<=3) return "NO";
    else{
        for(int i=0;i<n-2;i++){
            for(int j=i+2;j<n;j++){
                if(s[i]==s[j] and s[i+1]==s[j+1]){
                    return "YES";
                }
            }
        }
        return "NO";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}