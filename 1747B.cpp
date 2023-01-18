#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
            int m=n/2,p=3*n;
            int i=1;
            while(m--){
                cout<<i<<" "<<p-i<<" ";
                i+=3;
            }
            cout<<endl;
        }
        else{
            cout<<n/2+1<<endl;
            int m=n/2+1,p=3*n;
            int i=1;
            while(m--){
                cout<<i<<" "<<p-i<<" ";
                i+=3;
            }
            cout<<endl;
        }

    }
    return 0;
}