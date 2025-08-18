#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, H, solved = 0;
    cin >> N >> H;
    vector<int> A(N);

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) if (H >= A[i]) solved++;

    cout << solved << "\n";
    
    return 0;
}