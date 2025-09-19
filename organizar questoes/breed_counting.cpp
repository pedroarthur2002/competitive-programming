#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 

    ll A, B;

    while (cin >> A >> B){
        ll C = A ^ B;
        cout << C << "\n";
    }

    return 0;   
}