#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    vector<int> m(n);

    for (int i = 0; i <n; i++){
        m[i] = v[i] + i + 1;
    }

    int maior = m[0];

    for (int i = 0; i < n; i++){
        if (m[i] > maior) maior = m[i];
    }

    cout << maior + 1 << "\n";
    
    return 0;
}