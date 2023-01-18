#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    if(n==1){
        cin>>x;
        int q[x];
        for(int i=0;i<x;i++){
            cin>>q[i];
            if(q[i]>=a[0]) cout<<"1\n";
            else cout<<"0\n";
        }
    }
    else{
        sort(a,a+n);
        int m=a[n-1]+1,j=0,k=0;
        int b[m]={0};
        pair<int,int> p[s.size()];
        int count=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) count++;
            else{
                p[j].first=a[i];
                p[j++].second=count;
                count=1;
                if(i==n-2){
                    p[j].first=a[i+1];
                    p[j].second=count;
                }
            }
        }
        if(a[n-1]==a[n-2]){
            p[j].first=a[n-1];
            p[j++].second=count;
        }
        count=p[0].second;
        for(int i=a[0];i<m;i++){
            if(i>=p[k].first and i<p[k+1].first) b[i]=count;
            else{
                k++;
                count+=p[k].second;
                b[i]=count;
            }
        }
        cin>>x;
        int q[x];
        for(int i=0;i<x;i++){
            cin>>q[i];
            if(q[i]>=a[n-1]) cout<<n<<"\n";
            else if(q[i]<a[0]) cout<<"0\n";
            else cout<<b[q[i]]<<"\n";
        }
    }
    return 0;
}