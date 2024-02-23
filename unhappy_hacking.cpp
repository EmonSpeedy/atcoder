/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
// #define 	rep(x, y)		for(int i=x; i<y; i++)
// #define 	rev(x, y)		for(int i=x; i>=0; i--)
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
	string s; cin >> s;
	vc v;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '0') v.pb('0');
		else if(s[i] == '1') v.pb('1');
		else {
			if(v.size() >= 1) v.pop_back();
		}
	}
	for(char i : v){
		cout << i;
	}
	cout << "\n";
}

int32_t main() {
	inp();
	// int tc; cin >> tc;
	// while (tc--) {
	// 	func();
	// }
	func();
}