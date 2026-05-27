#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    map<int, int> freq;

    for (int i = 0; i < n; i++){
        cin >> k;
        freq[k]++;
    }
    
    for (auto i: freq){
        cout << i.first << " aparece " << i.second << " vez(es)" << "\n";
    }
    
    return 0;
}