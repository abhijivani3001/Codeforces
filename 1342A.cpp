#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        if(2*a<b){
            cout<<(x+y)*a<<"\n";
        }
        else{
            cout<<min(x,y)*b+(max(x,y)-min(x,y))*a<<"\n";
        }
    }
    return 0;
}