/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define 	rep(x, y)		for(int i=x; i<y; i++)
#define 	rev(x, y)		for(int i=x; i>=0; i--)
#define		pb 				push_back
#define		f 				first
#define		s 				second
#define 	all(x) 			x.begin(),x.end()
#define 	sortall(x)		sort(all(x))
// #define 	int 			long long
typedef 	vector<int>		vi;
typedef 	vector<char> 	vc;
typedef 	pair<int,int> 	pii;

const int mod = 1e9;

void inp() {
	FastIO;
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
}

void func() {
	int n; cin >> n;
	vi v(n);
	rep(0,n){
		cin >> v[i];
	}
	int ans = 1e9;
	rep(-100,101){
		int sum = 0;
		for(int j=0; j<n; j++){
			sum += (v[j]-i) * (v[j]-i);
		}
		ans = min(ans, sum);
	}
	cout << ans << "\n";
}

int32_t main() {
	inp();
	// int tc; cin >> tc;
	// while (tc--) {
	// 	func();
	// }
	func();
}