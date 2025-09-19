#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    
    float P = (float) (n/log(n));
    float M = (float) 1.25506*(n/log(n));
    
    printf("%.1f %.1f", P, M);
    return 0;
}