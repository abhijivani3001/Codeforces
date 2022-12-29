#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;
    int ans=0;
    while(x){
        if(x%2==0) x/=2;
        else{
            x-=1;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}