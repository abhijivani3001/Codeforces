#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long m=1000000007;
        long long ans1=(n*(n+1))%m;
        long long ans2=(ans1*(4*n-1))%m;
        cout<<((ans2*2022)/6)%m<<"\n";
    }
    return 0;
}