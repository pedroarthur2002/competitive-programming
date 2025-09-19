#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t; cin >> t;

    for (int i = 0; i < t; i++){
        set<char> st;

        int n, c = 0; cin >> n;
        char s[n+1];
        s[n] = '\0';

        for (int j = 0; j < n; j++){
            cin >> s[j];

            if (st.find(s[j]) != st.end()){
                c++;
            } else {
                c += 2;
            }

            st.insert(s[j]);
        }
        
        cout << c << "\n";
    }

    return 0;
}