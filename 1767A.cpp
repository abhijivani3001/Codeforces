#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3;
        string s;
        getline(cin,s);
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        if((x2==x1 and y2==y3) or (x2==x3 and y2==y1)) cout<<"NO\n";
        else if((x1==x2 and y1==y3) or (x1==x3 and y1==y2)) cout<<"NO\n";
        else if((x3==x1 and y3==y2) or (x3==x2 and y3==y1)) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}