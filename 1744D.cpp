#include<bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD1 1000000007
#define MOD2 998244353
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

int solve(){
    int n;
    cin>>n;
    int a[n],ans=0,sum=n,j,count;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        j=a[i]; count=0;
        while(!(j%2)){
            j/=2;
            count++;
        }
        sum-=count;
        if(sum<=0) return 0;
    }
    int b[n+1]={0};
    for(int i=1;i<=n;i++){
        j=i; count=0;
        while(!(j%2)){
            j/=2;
            count++;
        }
        b[i]=count;
    }
    sort(b,b+n+1,greater<int>());
    for(int i=0;i<=n;i++){
        sum-=b[i];
        ans++;
        if(sum<=0) return ans;
        if(b[i]==0) return -1;
    }
    return -1;
}

int main(){
    boost;
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}