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

void solve(){
    string s;
    getline(cin,s);
    char g[8][8];
	vector<int> r;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> g[i][j];
			if (g[i][j] == 'R') {r.push_back(i);}
		}
	}
	for (int i : r) {
	    bool ok = true;
	    for (int j = 0; j < 8; j++) {
	        if (g[i][j] != 'R') {ok = false; break;}
	    }
	    if (ok) {cout << "R\n"; return;}
	}
	cout << "B\n";
}

int main(){
    boost;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}