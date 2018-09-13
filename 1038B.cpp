#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n <= 2){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
        int m = n / 2;
        n = n - m;
        cout << m << " ";
        for(int i = 0 ; i < m ; i++){
            cout << 2 * (i + 1) << " ";
        }
        cout << endl << n << " ";
        for(int i = 0 ; i < n ; i++){
            cout << 2 * (i) + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}