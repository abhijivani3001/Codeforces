#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        char c=s[0];
        int k=0,flag=1;
        if(c=='Y') k=1;
        else if(c=='e') k=2;
        else if(c=='s') k=3;
        else{
            cout<<"NO\n";
            n=0;
        }
        for(int i=1;i<n;i++){
            if(k==1){
                if(s[i]=='e') k=2;
                else{
                    cout<<"NO\n";
                    flag=0;
                    break;
                }
            }
            else if(k==2){
                if(s[i]=='s') k=3;
                else{
                    cout<<"NO\n";
                    flag=0;
                    break;
                }
            }
            else if(k==3){
                if(s[i]=='Y') k=1;
                else{
                    cout<<"NO\n";
                    flag=0;
                    break;
                }
            }
            else{
                cout<<"NO\n";
                flag=0;
                break;
            }
        }
        if(flag && k!=0) cout<<"YES\n";
    }
    return 0;
}