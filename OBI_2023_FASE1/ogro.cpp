#include <bits/stdc++.h>

using namespace std;

int main(){
    int E, D, R;
    cin >> E;
    cin >> D;

    if (E > D) R = E + D;
    else R = 2*(D - E);

    cout << R << "\n";

    return 0;
}