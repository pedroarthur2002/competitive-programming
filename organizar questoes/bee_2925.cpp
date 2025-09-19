#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string invert_number(ll n){
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    vector<string> fibo(62);

    fibo[0] = "0";
    fibo[1] = "1";

    for (int i = 2; i <= 61; i++){
        ll soma = stoll(fibo[i-1]) + stoll(fibo[i-2]);
        fibo[i] = invert_number(soma);
    }

    int x;
    while (cin >> x){
        string s = fibo[x];
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }

    return 0; 
}