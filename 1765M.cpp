#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<"\n";
        return;
    }
    else{
        for(int i=3;i<=floor(sqrt(n));i+=2){
            if(n%i==0){
                cout<<n/i<<" "<<n-n/i<<"\n";
                return;
            }
        }
        cout<<"1 "<<n-1<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}