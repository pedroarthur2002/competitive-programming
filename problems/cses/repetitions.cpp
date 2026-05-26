#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    ll count = 1, max = 1;

    for (int i = 0; i < s.length() - 1; i++){
        if (s[i+1] == s[i]){
            count += 1;
        } else {
            count = 1;
        }
        if (count > max) max = count;
    }

    cout << max << "\n";

    return 0;
}
