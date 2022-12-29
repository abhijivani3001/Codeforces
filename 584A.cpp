#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    string t2=to_string(t);
    if(t2.length()>n) cout<<"-1\n";
    else{
        if(t==10){
            cout<<"1";
            while(--n) cout<<"0";
        }
        else{
            while(n--) cout<<t;
        }
        cout<<"\n";
    }
    return 0;
}