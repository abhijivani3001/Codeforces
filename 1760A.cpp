#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b and a>c){
            if(b>c) cout<<b<<endl;
            else cout<<c<<endl;
        }
        else if(b>c and b>a){
            if(a>c) cout<<a<<endl;
            else cout<<c<<endl;
        }
        else{
            if(a>b) cout<<a<<endl;
            else cout<<b<<endl;
        }
    }
    return 0;
}