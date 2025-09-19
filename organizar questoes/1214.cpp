#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int C;
    cin >> C;
    int N;
    for (int i =0; i < C; i++){
        
        cin >> N;
        vector<int> v(N);
        int sum = 0;

        for (int i = 0; i < N; i++){
            cin >> v[i];
            sum += v[i];
        }
        
        double count = 0;
        double media = (double) sum/N;
        for (int i = 0; i < N; i++){
            if (v[i] > media){
                count++;
            }
        }

        double media_alunos = (double) (count/N)*100;
        
        printf("%.3f%%\n", media_alunos);
    }
    return 0;
}