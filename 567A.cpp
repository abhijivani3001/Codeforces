#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(i==0) cout<<abs(a[i]-a[i+1])<<" "<<abs(a[i]-a[n-1])<<"\n";
        else if(i==n-1) cout<<abs(a[i]-a[i-1])<<" "<<abs(a[i]-a[0])<<"\n";
        else{
            if(abs(a[i]-a[i-1])<abs(a[i]-a[i+1])) cout<<abs(a[i]-a[i-1])<<" ";
            else cout<<abs(a[i]-a[i+1])<<" ";
            if(abs(a[i]-a[n-1])>abs(a[i]-a[0])) cout<<abs(a[i]-a[n-1])<<"\n";
            else cout<<abs(a[i]-a[0])<<"\n";
        }
    }
    return 0;
}