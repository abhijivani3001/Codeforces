#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,s;
        cin>>m>>s;
        int b[m];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(b,b+m);
        int sum=0;
        if(b[0]!=1){
            sum+=(b[0]-1)*(b[0])/2;
        }
        for(int i=0;i<m-1;i++){
            int diff=b[i+1]-b[i]-1;
            while(diff--){
                sum=sum+b[i]+diff+1;
            }
        }
        int j=1;
        if(sum==s) cout<<"YES\n";
        else if(sum<s){
            while(sum<s){
                sum+=b[m-1]+j;
                j++;
            }
            if(sum==s) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}