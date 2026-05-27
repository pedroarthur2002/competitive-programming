#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        for (int i = 0; i < n; i++){
            string s;
            cin >> s;
            int x = s[0] - '0';
            int y = s[2] - '0';

            if (x == y) cout << x*y << "\n";
            else if (islower(s[1])) cout << x + y << "\n";
            else if (isupper(s[1])) cout << y - x << "\n";
        }
    }

    return 0;
}