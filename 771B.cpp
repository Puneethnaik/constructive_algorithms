#include <bits/stdc++.h>
using namespace std;
vector<string> glob;
void pre(){
    for(int i = 0 ; i < 55; i++){
        string s;
        s += ((i / 26) + 'A');
        s += (i % 26) + 'a';
        // cout << s << endl;
        glob.push_back(s); 
    }
}
int main(){
    pre();
    int n, k;
    cin >> n >> k;

    vector<string> ans;
    for(int i = 0 ; i < n ; i++){
        ans.push_back(glob[i]);
    }
    for(int i = 0 ; i < n - k + 1; i++){
        string s;
        cin >> s;
        if(!s.compare("YES")){

        }
        else{
            ans[i + k - 1] = ans[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}