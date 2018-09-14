#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(){
    ll n;
    cin >> n;
    ll prev = 2;
    cout << "2\n";

    for(ll i = 2 ; i <= n ; i++){
        cout << (i) * (i + 1) * (i + 1) - (i - 1) << endl;
    }
    // cout << endl;
    return 0;
}