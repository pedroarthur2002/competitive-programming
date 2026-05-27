#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n && n != 0){
        vector<int> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];
            int peaks = 0;
        for (int i = 0; i < n; i++){
            
            int prev = v[(i-1 + n) % n];
            int next = v[(i+1) % n];

            if (((v[i] > prev) && (v[i] > next)) || ((v[i] < prev) && (v[i] < next))) peaks++;
        }

        cout << peaks << "\n";
    }

    return 0;
}