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
        sort(a,a+n);
        long m1=a[n-1],m2=a[n-2];
        for(int i=0;i<n;i++){
            if(b[i]!=m1) cout<<b[i]-m1<<" ";
            else cout<<b[i]-m2<<" ";
        }
        cout<<endl;
    }
    return 0;
}