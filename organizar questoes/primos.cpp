#include <bits/stdc++.h>
using namespace std;

bool ehPrimo (int n){
    bool primo = true;
    if (n < 2) primo = false;
    
    for (int i = 2; i <= n/i; i++){
        if (n % i == 0) primo = false;
    }

    return primo;
}

int qtd_divisores(int n){
    int ans = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0) ans++;
    }

    return ans;
}

vector<int> qtd_divisores2(int n){
    vector<int> ans;

    for (int i = 1; i <= n/i; i++){
        if (n % i == 0){
            if (i*i == n){
                ans.push_back(i);
            } else {
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}


int main(){

    int n; cin >> n;
    vector<int> div = qtd_divisores2(n);

    cout << qtd_divisores(n) << "\n";
    for (int i = 0; i < div.size(); i++) cout << div[i] << " ";

    return 0;
}