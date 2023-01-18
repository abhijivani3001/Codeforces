#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        int l=0,r=n-1,count=1;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                if(count>s.size()-(l-r)){
                    r=i;
                    l=i-count+1;
                }
                count=1;
            }
            else count++;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}