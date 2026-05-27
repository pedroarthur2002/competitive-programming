#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> seen;
    string s;

    for (int i =0; i < n; i++){
        cin >> s;

        if (seen.count(s)){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

        seen.insert(s);
    }
    
    return 0;
}