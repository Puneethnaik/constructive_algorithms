#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> w(n);
    for(int i = 0 ; i < n ; i++){
        cin >> w[i];
    }
    vector<int> visi(n + 1);
    vector<int> order;
    vector<int> book(m);
    for(int i = 0 ; i < m ; i++){
        int it;
        cin >> it;
        if(!visi[it]){
            visi[it] = 1;
            order.push_back(it);
        }
        book[i] = it;
    }
    for(int i = 1 ; i <= n ; i++){
        if(!visi[i]){
            order.push_back(i);
        }
    }
    // cout << "order :\n";
    // for(int i = 0 ; i < n ; i++){
    //     cout << order[i] << " ";
    // }
    // cout << endl;
    int ans = 0;
    for(int i = 0 ; i < m ; i++){
        // cout << "for i = " << i << " " << book[i] << endl;
        for(int j = 0 ; j < n ; j++){
            if(order[j] == book[i]){
                order.erase(order.begin() + j);
                order.insert(order.begin(), book[i]);
                break;
            }
            else{
                // cout << "adding book " << order[j] << endl;
                ans += w[order[j] - 1];
            }
        }
        
    }
    cout << ans << endl;
    return 0;
}