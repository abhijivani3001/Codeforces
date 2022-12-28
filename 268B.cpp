#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long count=n;
    for(int i=1;i<n;i++){
        count+=1+(n-i-1)*(i+1);
    }
    cout<<count;
    return 0;
}