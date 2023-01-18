#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n],prev=0,j;
    long long sum=0,min_sum=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>=k){
            sum-=a[prev];
            prev++;
            sum+=a[i];
            if(sum<min_sum){
                min_sum=sum;
                j=prev+1;
            }
        }
        else{
            sum+=a[i];
            if(i+1==k){
                min_sum=sum;
                j=prev+1;
            }
        }
    }
    cout<<j;
    return 0;
}