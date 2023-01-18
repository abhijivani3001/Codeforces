#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(b>=a){
            if(n%a) cout<<n/a+1<<"\n";
            else cout<<n/a<<"\n";
        }
        else{
            cout<<"1\n";
        }
    }
    return 0;
}