#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ans=0,prev=0;
    while(a){
        ans+=a;
        if(a%b) prev+=a%b;
        a/=b;
        if(prev>=b){
            a+=prev/b;
            prev%=b;
        }
    }
    cout<<ans;
    return 0;
}