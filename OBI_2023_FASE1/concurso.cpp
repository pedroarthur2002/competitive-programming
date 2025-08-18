#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K, C; cin >> N >> K;

    vector<int> A(N);

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<int>());

    cout << A[K-1] << "\n";

    return 0;
}