#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    int x, ans;
    cin >> x;

    if (x % 5 != 0){
        ans = (x/5) + 1;
    } else{
        ans = x/5;
    }

    cout << ans;

    return 0;
}