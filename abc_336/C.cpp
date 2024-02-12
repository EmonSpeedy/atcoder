/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	mp 			make_pair
#define 	f 			first
#define 	s 			second
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w			while
#define 	newl		cout<<'\n'

typedef 	pair<int,int> 	pii;
typedef 	pair<ll,ll> 	pll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

void f(){
	ll n; cin>>n;
	if(n == 1){
		cout << 0;
		return;
	}
    int nums[5] = {0, 2, 4, 6, 8};
    stack<int> st;
    n--;
    w(n)
    {
    	st.push(n % 5);
    	n /= 5;
    }
    w(st.size())
    {
    	cout << nums[st.top()];
    	st.pop();
    }
    newl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // int TC = 1; cin >> TC;
    // for(int k = 1; k <= TC; k++){
    //     f();
    // }
    f();
    return 0;
}