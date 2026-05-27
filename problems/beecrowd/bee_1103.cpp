#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2 && !(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)){
        int a, b;
        a = (h1*60) + m1;
        b = (h2*60) + m2;
        int c = (b - a + 1440) % 1440;

        if (c == 0) c = 1440;

        cout << c << "\n";
    }

    return 0;
}