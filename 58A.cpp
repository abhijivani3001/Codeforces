#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    string a="hello";
    int k=0;
    for(int i=0;i<n;i++){
        if(s[i]==a[k]){
            k++;
        }
        if(k>=5){
            cout<<"YES\n";
            break;
        }
    }
    if(k<5)
        cout<<"NO\n";
    return 0;
}