/*
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    int sum_a = 0, sum_b = 0;
    for(int k = 1; k <= TC; k++){
        int a, b; cin >> a >> b;
        sum_a += a; sum_b += b;
    }
    if(sum_a > sum_b) cout << "Takahashi\n";
    else if(sum_a < sum_b) cout << "Aoki\n";
    else{
        cout << "Draw\n";
    }
    return 0;
}