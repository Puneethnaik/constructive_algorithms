#include <bits/stdc++.h>
using namespace std;

const int maxn = 10;
int fact(int n){
    int cnt = maxn;
    int ans = 0;
    int ex = 5;
    while(cnt--){
        ans += (n / ex);
        ex *= 5;
    }
    return ans;
}

int main(){
    int m;
    cin >> m;
    vector<int> ans;
    for(int i = 500000; i >= 1 ; i--){
        if(fact(i) == m){
            ans.push_back(i);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}