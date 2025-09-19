#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    int ans = 0;
    cin >> s1;
    cin >> s2;

    for (char &c: s1){
        c = tolower(c);
    }

    for (char &c: s2){
        c = tolower(c);
    }

    for (int i = 0; i < s1.size(); i++){
        if (s1[i] != s2[i]){
            if (s1[i] < s2[i]){
                ans = -1;
                break;
            }

            if (s1[i] > s2[i]){
                ans = 1;
                break;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}