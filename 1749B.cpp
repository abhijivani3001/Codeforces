#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n],sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            sum+=b[i];
        }
        ll m=INT_MIN;
        for(ll i=0;i<n;i++){
            if(b[i]>m)
                m=b[i];
        }
        cout<<sum-m<<endl;
    }
    return 0;
}