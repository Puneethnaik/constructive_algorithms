#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n <= 3){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        if(n & 1){
            cout << "5 * 3 = 15\n";
            cout << "2 * 4 = 8\n";
            cout << "8 + 15 = 23\n";
            cout << "23 + 1 = 24\n";
            for(int i = 6 ; i < n ; i += 2){
                cout << i + 1 << " - " << i << " = 1\n";
                cout << "24 * 1 = 24\n";
            }
        }
        else{
            cout << "1 * 2 = 2" << endl;
            cout << "2 * 3 = 6" << endl;
            cout << "6 * 4 = 24" << endl;
            for(int i = 5 ; i < n ; i += 2){
                cout << i + 1 << " - " << i << " = 1\n";
                cout << "24 * 1 = 24\n";
            }
        }
    }
    return 0;
}