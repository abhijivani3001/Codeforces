#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    while(k--){
        long long n,x,t;
        cin>>n>>x>>t;
        long long a=min(n-1,t/x);
        cout<<(a*(n-1))-(a*(a-1)/2)<<endl;
    }
    return 0;
}