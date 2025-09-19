#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int n; cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;

        if (s.size() > 10){
            int ans = s.size() - 2;
            cout << s[0] + (to_string(ans)) + s[s.size() - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }

    return 0; 
}