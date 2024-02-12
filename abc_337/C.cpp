/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w() 		while()
#define 	newl		cout<<'\n'

typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

void f(){
    int n; cin>>n;
    vi v(n+1);
    int pos = -1;
    for(int i=1, a; i<=n; i++)
    {
    	cin >> a;
    	if(a == -1) pos = i;
    	else v[a] = i;
    }
    cout << pos << " ";
    for(int i=1; i<=n-1; i++)
    {
    	cout << v[pos] << " ";
    	pos = v[pos];
    }
    newl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // int TC; cin >> TC;
    // for(int k = 1; k <= TC; k++){
    //     f();
    // }
    f();
    return 0;
}