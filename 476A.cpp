#include<bits/stdc++.h>
using namespace std;

int solution(int n, int m){
    for(int i=m;i<=n;i+=m){
        if(i*2>=n){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<solution(n,m)<<endl;
    return 0;
}