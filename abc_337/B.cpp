/*
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s; cin >> s;
    if(s.size() == 0)
    {
        cout << "Yes\n";
        return 0;
    }
    int flag = 0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i] < s[i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}