#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    vector<int> v(n);
    ll moves = 0;

    for (int i = 0; i < n; i++) cin >> v[i];


    for (int i = 1; i < n; i++){
        if (v[i - 1] > v[i]){
            moves += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    cout << moves << "\n";

    return 0;
}
