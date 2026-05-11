#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, fat = 1, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++){
        fat *= i;
    }

    while (n > 0){
        n /= 5;
        ans += n;
    }

    cout << ans << "\n";

    return 0;
}