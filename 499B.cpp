#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> a,b;
    for(int i=0;i<m;i++){
        string x,y;
        cin>>x>>y;
        a.push_back(x); b.push_back(y);
    }
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        for(int i=0;i<m;i++){
            if(x==a[i] or x==b[i]){
                if(b[i].length()<a[i].length()) cout<<b[i]<<" ";
                else cout<<a[i]<<" ";
                break;
            }
        }
    }
    return 0;
}