#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long x,y;
    (n%a) ? x=n/a+1 : x=n/a;
    (m%a) ? y=m/a+1 : y=m/a;
    cout<<x*y;
    return 0;
}