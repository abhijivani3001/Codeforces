#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
            cout<<s[i];
        for(int i=s.length()-1;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}