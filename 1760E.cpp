#include<bits/stdc++.h>
using namespace std;

long long solve(int a[],int n){
    int key=1,j=n,x=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==1 and key){
            j=i;
            key=0;
        }
        if(i>j and a[i]==0) x++;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1) ans+=x;
        else{
            if(i>j) x--;
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],j=-1;
        long long ans1,ans2,ans3;
        for(int i=0;i<n;i++) cin>>a[i];
        ans1=solve(a,n);

        for(int i=0;i<n;i++){
            if(a[i]==0){
                j=i;
                a[i]=1;
                break;
            }
        }
        ans2=solve(a,n);

        if(j!=-1) a[j]=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]==1){
                a[i]=0;
                break;
            }
        }
        ans3=solve(a,n);
        cout<<max(ans1,max(ans2,ans3))<<"\n";
    }
    return 0;
}