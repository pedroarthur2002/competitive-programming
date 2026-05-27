#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t; cin >> t;

    for (int i = 0; i < t; i++){
        int n, ce = 0, co = 0, des = 0, ie = 0, io = 0; cin >> n;
        vector<int> v(n);

        for (int j = 0; j < n; j++){
            cin >> v[j];

            if (v[j] % 2 == 0) ce++;
            else co++;

            if (j % 2 != v[j] % 2) des++;
        }

        if (n % 2 == 0){
            ie = n/2;
            io = n/2;
        } else {
            ie = (n + 1)/2;
            io = n/2;
        }

        if (!((ce == ie) && (co == io))){
            cout << -1 << "\n";
        } else {
            cout << (des/2) << '\n';
        }

    }

    return 0;
}