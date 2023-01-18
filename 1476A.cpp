#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n%k==0){
            cout<<"1\n";
        }
        else{
            if(n>k){
                int r=0;
                if(n%k) r=1;
                k=(n/k+r)*k;
            }
            if(k%n) cout<<k/n+1<<"\n";
            else cout<<k/n<<"\n";
        }
    }
    return 0;
}