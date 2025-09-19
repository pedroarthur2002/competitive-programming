#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, c = 0;
    cin >> n >> x;
    char t[n+1];
    t[n] = '\0';
    
    for (int i = 0; i < n; i++){
        char s;
        cin >> s;
        t[i] = s;
    }
    
    vector<int> v(3);
    for (int i = 0; i < 3; i++){
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++){
        if (t[i] == 'P'){
            if (x >= v[0]){
                c += v[0];
            }
        } else if (t[i] == 'M'){
            if (x >= v[1]) c += v[1];
        } else if (t[i] == 'G'){
            if (x >= v[2]) c+= v[2];
        }
    }
    
    int ans;
    if ( c % x == 0){
        ans = c/x;
    } else {
        ans = (c/x) + 1;
    }
    
    cout << ans << "\n";
    
    return 0;
}