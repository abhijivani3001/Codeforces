#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        if(n%2) cout<<n/2+1<<endl;
        else cout<<n/2<<endl;
    }
    return 0;
}