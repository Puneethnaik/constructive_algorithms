#include <bits/stdc++.h>
using namespace std;z
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans = max(ans, (i + 1) * (n - i));
    }
    cout << ans << endl;
    return 0;
}