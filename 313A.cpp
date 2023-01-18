#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n>=0) cout<<n<<"\n";
    else{
        string s=to_string(n);
        int m=s.length(),key;
        if(m==3 and (s[m-1]=='0' or s[m-2]=='0')){
            cout<<"0\n";
        }
        else{
            if(s[m-1]>s[m-2]) key=m-1;
            else key=m-2;
            for(int i=0;i<m;i++){
                if(i!=key) cout<<s[i];
            } cout<<"\n";
        }
    }
    return 0;
}