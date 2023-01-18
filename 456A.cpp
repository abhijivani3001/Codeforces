#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x; cin>>y;
        a[i].first=x; a[i].second=y;
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i].first<a[i+1].first and a[i].second>a[i+1].second)
            return "Happy Alex\n";
    }
    return "Poor Alex\n";
}

int main(){
    cout<<solve();
    return 0;
}