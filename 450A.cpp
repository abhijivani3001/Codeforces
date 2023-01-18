#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x=0,key;
    for(int i=n-1;i>=0;i--){
        if(a[i]%m){
            if((a[i]/m+1)>x){
                x=a[i]/m+1;
                key=i+1;
            }
        }
        else{
            if((a[i]/m)>x){
                x=a[i]/m;
                key=i+1;
            }
        }
    }
    cout<<key<<endl;
    return 0;
}