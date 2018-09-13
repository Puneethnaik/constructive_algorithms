#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    if(k > 36){
        cout << "-1\n";
    }
    else {
        int amt = k / 2, rem = k % 2;
        string ans = "";
        for(int i = 0 ; i < amt; i++){
            ans += "8";
        }
        if(rem){
            ans += "9";
        }
        cout << ans << endl;
    }
    return 0;
}