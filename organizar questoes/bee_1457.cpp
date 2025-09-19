#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        ll n;
        string s;
        cin >> n >> s;
        ll k = s.size();
        ll f = n;
        ll j = 1;

        while (n - j*k > 1){
            f *= (n - j*k);
            j++;
        }

        cout << f << "\n";
    }

    return 0;
}