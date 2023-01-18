#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2) cout<<"-1\n";
        else{
            int j=1,k=pow(n,2)/2+1,count=0;
            for(int i=1;i<=pow(n,2)/2;i++){
                cout<<k++<<" ";
                count++;
                if(count%n==0) cout<<"\n";
                cout<<j++<<" ";
                count++;
                if(count%n==0) cout<<"\n";
            }
            if(n%2) cout<<k<<"\n";
        }
    }
    return 0;
}