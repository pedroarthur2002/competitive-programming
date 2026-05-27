#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    
    while (cin >> N && N != 0){
        for (int i = 0; i < N; i++){
            vector<int> v(N);
            
            for (int i = 0; i < 5; i++) cin >> v[i];        
            int black = 0, alt = 0;

            for (int i = 0; i < 5; i++){
                if (v[i] <= 127){
                    black++;
                    alt = i;
                }
            }

            if (black == 1){
                if (alt == 0) cout << "A" << "\n";
                else if (alt == 1) cout << "B" << "\n";
                else if (alt == 2) cout << "C" << "\n";
                else if (alt == 3) cout << "D" << "\n";
                else if (alt == 4) cout << "E" << "\n";
            } else {
                cout << "*" << "\n";
            }
        }
    }
   
    return 0;
}