#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, k, div = 0;
    cin >> n >> k;
    vector <ll> a(k);

    for (int i = 0; i < k; i++) cin >> a[i];

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n; j++){
            if (i % a[j] == 0){
                div++;
                break;
            }
        }
    }

    cout << div << "\n";

    return 0;
}