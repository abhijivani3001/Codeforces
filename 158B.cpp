#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s[n];
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==1) a++;
        if(s[i]==2) b++;
        if(s[i]==3) c++;
        if(s[i]==4) d++;
    }
    int ans=d+c;
    a-=c;
    if(b%2==0) ans+=b/2;
    else{
        ans+=b/2+1;
        a-=2;
    }
    if(a>0){
        if(a%4) ans+=a/4+1;
        else ans+=a/4;
    }
    cout<<ans;
    return 0;
}