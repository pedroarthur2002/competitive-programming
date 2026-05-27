#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;

        int r = ((3*x)*(3*x)) + y*y;
        int b = 2*(x*x) + ((5*y)*(5*y));
        int c = -100*x + (y*y*y);

        if (r > b && r > c) cout << "Rafael ganhou" << "\n";
        else if (b > r && b > c) cout << "Beto ganhou" << "\n";
        else if (c > r && c > b) cout << "Carlos ganhou" << "\n";
    }

    return 0;
}