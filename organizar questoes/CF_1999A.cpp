#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t; cin >> t;

    for (int i = 0; i < t; i++){
        int n; cin >> n;

        int d1 = n / 10;
        int d2 = n % 10;

        cout << d1 + d2 << "\n";
    }

    return 0;
}