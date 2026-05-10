#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n, p, s = 0; cin >> n;

    for (int i = 0; i < n - 1; i++){
        cin >> p;
        s += p;
    }

    ll ans = ((n+1)*n)/2 - s;
    cout << ans << "\n";

    return 0;
}
