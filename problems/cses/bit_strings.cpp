#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;

int main(){
    ll n, ans = 1;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        ans = (ans * 2) % MOD;
    }

    cout << ans % MOD<< "\n";

    return 0;
}