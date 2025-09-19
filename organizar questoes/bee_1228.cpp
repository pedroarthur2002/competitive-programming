#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> begin(n);
        vector<int> end(n);
        vector<int> pos_i(n+1);
        vector<int> pos_f(n+1);
        int overtaking = 0;

        for (int i = 0; i < n; i++){
            cin >> begin[i];
            pos_i[begin[i]] = i;
        } 

        for (int i = 0; i < n; i++){
            cin >> end[i];
            pos_f[end[i]] = i;
        }

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if (pos_i[i] < pos_i[j] && pos_f[i] > pos_f[j]) overtaking++;                                
            }
        }

        cout << overtaking << "\n";

    }

    return 0;
}