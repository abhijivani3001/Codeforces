#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int a[n-1];
    for(int i=0;i<n-1;i++) cin>>a[i];
    bool flag=true;
    int ans=0;
    if(t==n) cout<<"YES\n";
        else{
        for(int i=0;i<n-1;i++){
            if(i==t-1){
                cout<<"YES\n";
                flag=false;
                break;
            }
            i+=(a[i]-1);
        }
        if(flag) cout<<"NO\n";
    }
    return 0;
}