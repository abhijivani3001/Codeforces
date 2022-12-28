#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    long long count=0;
    for(int i=1;i<=min(n,x);i++){
        if(x/i<=n and x%i==0) count++;
    }
    cout<<count;
    return 0;
}