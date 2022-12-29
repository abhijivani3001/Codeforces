#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long m=n/2;
        cout<<4*(m)*(m+1)*(2*m+1)/3<<"\n";
    }
    return 0;
}