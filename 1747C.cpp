#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a+1,a+n);
        if(a[0]>a[1])
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
    }
    return 0;
}