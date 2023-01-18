#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push(s[i]);
            if(s[i]==')'){
                if(!st.empty()) st.pop();
            }
        }
        cout<<st.size()<<"\n";
    }
    return 0;
}