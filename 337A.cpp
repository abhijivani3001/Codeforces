#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    int i=0,x=INT_MAX;
    while(i+n-1!=m){
        int diff=a[i+n-1]-a[i];
        if(diff<x) x=diff;
        i++;
    }
    cout<<x<<endl;
    return 0;
}