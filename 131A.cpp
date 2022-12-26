#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length(),flag=0;
    for(int i=1;i<n;i++){
        if(!(s[i]>='A' and s[i]<='Z')){
            flag=1;
            break;
        }
    }
    if(flag) cout<<s;
    else{
        if(s[0]>='A' and s[0]<='Z') cout<<char(s[0]+32);
        else cout<<char(s[0]-32);
        for(int i=1;i<n;i++){
            cout<<char(s[i]+32);
        }
    }
    return 0;
}