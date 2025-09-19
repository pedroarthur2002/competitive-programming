#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        double c;
        cin >> c;
        int count = 0;

        while (c > 1){
            c /= 2;
            count++;
        }

        cout << count << " dias" << "\n";
    }

    return 0;
}