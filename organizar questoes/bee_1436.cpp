#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> v(n);

        for (int j = 0; j < n; j++){
            cin >> v[j];
        }

        cout << "Case " << i + 1 << ": " << v[(n-1)/2] << "\n";
    }

    

    return 0;
}


