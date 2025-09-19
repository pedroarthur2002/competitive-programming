#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    vector<int> f(5);
    f[0] = 1;
    for (int i = 1; i <= 5; i++) f[i] = f[i - 1]*i;

    while (cin >> n && n != 0){
        string n_s = to_string(n);
        int decimal = 0;
        int div = 1, divisor = n;
        int digit;

        for (int i = 1; i < n_s.size(); i++){
            div *= 10;
        }
        
        for (int i = n_s.size(); i >= 1; i--){
            digit = divisor / div;
            decimal += digit*f[i];
            digit = divisor % div;
            divisor = digit;
            div /= 10;
        }   

        cout << decimal << "\n";
    }

    return 0;
}