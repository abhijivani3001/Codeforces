#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1,ans;
    while(n>0){
        ans=((i)*(1+i))/2;
        n-=ans;
        i++;
    }
    if(n<0)
        cout<<i-2<<endl;
    else
        cout<<--i<<endl;
    return 0;
}