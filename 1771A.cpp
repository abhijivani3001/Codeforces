#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[0]==a[n-1]) cout<<n*(n-1)<<"\n";
        else{
            long long j=1,x=1,y=1;
            while(j<n){
                if(a[0]==a[j++])
                    x++;
            }
            j=n-2;
            while(j>=0){
                if(a[n-1]==a[j--])
                    y++;
            }
            cout<<2*x*y<<"\n";
        }
    }
    return 0;
}