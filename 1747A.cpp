#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int sum=0;
        for(long long int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout<<abs(sum)<<"\n";
    }
    return 0;
}