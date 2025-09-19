#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> st;

    for (auto c : s){
        st.insert(c);
    }

    if (st.size() % 2 == 0){ 
        cout << "CHAT WITH HER!" << "\n";
    } else {
        cout << "IGNORE HIM!" << "\n";
    }

    return 0;
}