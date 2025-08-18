#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, I, A = 0 , B = 0; cin >> N;
    
    for (int i = 0; i < N; i++){
        cin >> I;

        if (I == 1){
            A = !A; 
        } else if (I == 2){
            A = !A;
            B = !B;
        }
    }

    cout << A << "\n";
    cout << B << "\n";

    return 0;
}