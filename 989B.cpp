#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> arr[k + 1];
    int cnt1 = 0, cnt2 = 0;
    for(int i = 1 ; i <= k ; i++){
        for(int j = 0 ; i + j <= n ; j += k){
            // cout << s[i + j - 1] << " "; 
            arr[i].push_back(s[i + j - 1]);
        }
        // cout << endl;
    }
    bool flg = true;
    for(int i = 1 ; i <= k ; i++){
        if(arr[i].size() == 1){
            if(arr[i][0] == '.'){
                arr[i][0] = '1';
            }
            continue;
        }
        else {
            cnt1++;
            if(count(arr[i].begin(), arr[i].end(), '.') >= 1){
                for(int j = 1 ; j < arr[i].size(); j++){
                    if(arr[i][j] == '.' and arr[i][j - 1] == '.'){
                        arr[i][j] = '1';
                        arr[i][j - 1] = '0';
                    }
                    else if(arr[i][j] == '.'){
                        arr[i][j] = !(arr[i][j - 1] - '0') + '0'; 
                    }
                    else if(arr[i][j - 1] == '.'){
                        arr[i][j - 1] = !(arr[i][j] - '0') + '0';
                    }
                    else{

                    }
                }
            }
            else{
                bool flag = false;
                for(int j = 1 ; j < arr[i].size(); j++){
                    if(arr[i][j] != arr[i][j - 1]){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    cnt2++;
                }
                // if(!flag){
                //     cout << "do not here " << i << endl;
                //     flg = false;
                //     break;
                // }
            }
        }
        
    }
    string ans(n, '0');
    for(int i = 1 ; i <= k ; i++){
        for(int j = 0 ; j < arr[i].size(); j++){
            // cout << arr[i][j] << " ";
            ans[i + k * j - 1] = arr[i][j];
        }
        // cout << endl;
    }
    // cout << cnt1 << " " << cnt2 << endl;
    if(cnt1 != cnt2){
        cout << ans << endl;
    }
    else{
        cout << "No\n";
    }
    return 0;
}