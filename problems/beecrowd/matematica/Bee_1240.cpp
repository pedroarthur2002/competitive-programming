#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A, B;
    
    for (int i =0; i < N; i++){
        cin >> A >> B;
        string B_S = to_string(B);
        int den = 1;

        for (int i = 0; i < B_S.length(); i++){
            den *= 10;
        }

        if (A % den == B){
            cout << "encaixa" << "\n";
        } else{
            cout << "nao encaixa" << "\n";
        }
    }
    return 0;
}