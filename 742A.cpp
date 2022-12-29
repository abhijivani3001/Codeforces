#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0) cout<<"1\n";
    else if(n%4==0) cout<<"6\n";
    else if((n-1)%4==0) cout<<"8\n";
    else if((n+1)%4==0) cout<<"2\n";
    else cout<<"4\n";
    return 0;
}