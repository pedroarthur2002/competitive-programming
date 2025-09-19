#include <bits/stdc++.h>
#include <cmath>
using namespace std;

using ll = long long int;
vector<vector<ll>> m(n, vector<ll>(k));

vector<vector<ll>> preprocess (vector<ll> v, ll n){
    ll k = log2(n) + 1;

    for(int i = 0; i < n; i++) m[i][0] = i;
    
    for (int j = 1; 1 << j <= n; j++){

        for (int i = 0; i + (1 << j) - 1 < n; i++){
            if (v[m[i][j-1]] < v[m[i + (1 << (j-1))][j-1]]){
                m[i][j] = m[i][j-1];
            } else{
                m[i][j] = m[i + (1 << (j-1))][j-1];
            }
    }

    return m;
}

ll query (ll a, ll b){
    ll length = b - a + 1;
    ll k = log2(length);

    return min(v[m[a][k]], v[m[a + (length)]]);
}

int main(){


    return 0;
}