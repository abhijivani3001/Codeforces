#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int ans=0,count=0;
    for(int i=n-1;i>=0;i--){
        ans+=a[i];
        count++;
        if(ans>sum/2) break;
    }
    cout<<count<<endl;
    return 0;
}