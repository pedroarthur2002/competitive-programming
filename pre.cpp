#include <bits/stdc++.h>

using namespace std;

int main(){
    // Seu código vai aqui
    int N, soma = 0, days  = 0, j = 0 ; cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++){
        cin >> A[i];
        soma += A[i];
        days++;
        if (soma >= 1000000) break;
    }

    cout << days << "\n";
    return 0;
}