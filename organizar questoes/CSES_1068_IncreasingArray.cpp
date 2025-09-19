#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll mov = 0, ans = 0;

    for (int i = 1; i < n; i++){
        if (a[i] < a[i-1]){

            while (a[i] != a[i-1]){
                a[i]++;
                mov++;
            }

            ans += mov;
            mov = 0;
        }
    }

    cout << ans << "\n";

    return 0;
}
