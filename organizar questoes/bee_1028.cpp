#include <bits/stdc++.h>
using namespace std;

int mdc (int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(){
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        int F1, F2;
        cin >> F1 >> F2;
        
        if (F1 > F2) cout << mdc(F1,F2) << "\n";
        else cout << mdc(F2,F1) << "\n";
    }

    return 0;
}