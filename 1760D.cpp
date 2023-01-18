#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        long m=b[0];
        int key=0,flag=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==m) key=1;
            if(a[i]<a[i+1] and key==0){
                cout<<"NO\n";
                flag=0;
                break;
            }
            if(a[i]>a[i+1] and key){
                cout<<"NO\n";
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES\n";
    }
    return 0;
}