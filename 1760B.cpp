#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m=1;
        for(int i=0;i<n;i++){
            if(s[i]-96>m) m=s[i]-96;
        }
        cout<<m<<endl;
    }
    return 0;
}