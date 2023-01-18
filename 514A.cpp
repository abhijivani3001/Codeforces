#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string s=to_string(n);
    for(int i=0;i<s.length();i++){
        if(s[i]>='5'){
            if(!(i==0 and s[i]=='9')){
                s[i]='9'-s[i]+48;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}