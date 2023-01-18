#include<bits/stdc++.h>
using namespace std;

string divisor(long long n){
    long long m=n;
	while(m>2){
		m/=2;
		if(m&1 and n%m==0)
			return "YES";
	}
    return "NO";
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0){
            cout<<"YES\n";
        }
        else{
            cout<<divisor(n)<<endl;
        }
    }
    return 0;
}