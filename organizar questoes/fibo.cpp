#include <bits/stdc++.h>

using namespace std;
using ll = long long int;


int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    ll n, q, x, y;
    cin >> n >> q;
    vector<ll> p(n);

    for (int i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p.begin(), p.end(), greater<ll>());

    vector<ll> prefix(n+1, 0);

    for (int i = 1; i <= n; i++){
        prefix[i] = prefix[i- 1] + p[i - 1];
    }

    for (int i = 0; i < q; i++){
        cin >> x >> y;

        cout << prefix[x] - prefix[x-y] << "\n";
    }

    return 0;
}