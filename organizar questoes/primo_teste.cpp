#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n){
    vector<bool> primo(n+1, 1);
    primo[0] = primo[1] = 0;
    
    for (int i = 2; i <= n; i++){
        if (primo[i]){
            for (int j = 2*i; j <=n; j += i){
                primo[j] = 0;
            }
        }
    }
    
    return primo;
}

int main(){
    int n;
    cin >> n;
    
    vector<bool> primos = sieve(n);

    for (int i = n; i >= 2; i--){
       if(primos[i - 2] && primos[i]){
        cout << i - 2 << " " <<  i << "\n";
        break;
       }
    }
    
    return 0; 
}