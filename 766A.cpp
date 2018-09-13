#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    if(!a.compare(b)){
        cout << "-1\n";
    }
    else {
        cout << max(a.length(), b.length()) << endl;
    }
    return 0;
}