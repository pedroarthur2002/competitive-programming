#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int l, c, a = 0;
    
    for (int i = 0; i < n; i++){
        cin >> l >> c;
        if (l > c){
            a += c;
        }
    }

    cout << a << "\n";

    return 0;
}