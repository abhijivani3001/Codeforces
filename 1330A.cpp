#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int m=a[n-1];
        int b[m+1]={0};
        int flag=1;
        for(int i=0;i<n;i++){
            b[a[i]]++;
        }
        for(int i=1;i<m+1;i++){
            if(b[i]==0){
                x--;
            }
            if(x<=0){
                if(b[i+1]==0){
                    cout<<i<<endl;
                    flag=0;
                    break;
                }
                else{
                    continue;
                }
            }
        }
        if(flag){
            cout<<a[n-1]+x<<endl;
        }
    }
    return 0;
}