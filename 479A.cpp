#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1 and c==1) cout<<a+b+c;
    else if(b==1) cout<<(min(a,c)+b)*max(a,c);
    else if(a==1 or c==1) cout<<(b+1)*max(a,c);
    else cout<<a*b*c;
    return 0;
}