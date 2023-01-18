#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count=0;
        int temp=k;
        while(n*count<=k){
            count=k/n;
            k=temp;
            k+=count;
            count++;
        }
        cout<<k<<endl;
    }
    return 0;
}