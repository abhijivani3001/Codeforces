#include<bits/stdc++.h>
using namespace std;

string solve(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    pair<int,int> a[26]={make_pair(0,0)};
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='a' and s1[i]<='z') a[s1[i]-97].first++;
        if(s1[i]>='A' and s1[i]<='Z') a[s1[i]-65].second++;
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='a' and s2[i]<='z'){
            a[s2[i]-97].first--;
            if(a[s2[i]-97].first<0) return "NO";
        }
        if(s2[i]>='A' and s2[i]<='Z'){
            a[s2[i]-65].second--;
            if(a[s2[i]-65].second<0) return "NO";
        }
    }
    return "YES";
}

int main(){
    cout<<solve();
    return 0;
}