#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n],ans=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans*=a[i];
        }
        cout<<(ans+(n-1))*2022<<"\n";
    }
    return 0;
}