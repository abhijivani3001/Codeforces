#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        int count=0,count1=0,count2=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==1 and a[j]==0) count++;
                else if(a[i]==0) break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                a[i]=1;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==1 and a[j]==0) count1++;
                else if(a[i]==0) break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(b[i]==1){
                b[i]=0;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(b[i]==1 and b[j]==0) count2++;
                else if(b[i]==0) break;
            }
        }
        cout<<max(count,max(count1,count2))<<endl;
    }
    return 0;
}