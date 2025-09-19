#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int N, ans = 0; cin >> N;
    vector<int> v(N);
    
    for(int i =0 ; i < N; i ++) cin >> v[i];
    
    for (int i = 0 ; i < N-1; i ++){
        if (v[i] != v[i+1]) ans++;
    }
    
    cout << ans + 1 << "\n";
    
 
    return 0;
}