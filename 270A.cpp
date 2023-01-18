#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(360%(180-a)) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}