#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int m=0,count=0,key=0,front,back;
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                front=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g'){
                back=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]==c and s[i]!='g'){
                if(i>back) m=max(m,(n-i)+front);
                else key=1;
            }
            if(s[i]=='g'){
                m=max(m,count);
                key=0;
                count=0;
            }
            if(key) count++;
        }
        cout<<m<<endl;
    }
    return 0;
}