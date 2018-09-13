#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int ans[n][n];
    k--;
    int cnt = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < k ; j++){
            ans[i][j] = cnt++;
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--){
        for(int j = k ; j < n ; j++){
            ans[i][j] = cnt++;
        }
    }
    int fin = 0;
    for(int i = 0 ; i < n ; i++){
        fin += ans[i][k];
    }
    cout << fin << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}