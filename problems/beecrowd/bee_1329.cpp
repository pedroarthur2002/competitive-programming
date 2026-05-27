#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    while (cin >> n && n != 0){
        vector<int> r(2,0);

        for (int i = 0; i < n; i++){
            cin >> x;
            if (x == 0) r[0]++;
            else if (x == 1) r[1]++;
        }

        cout << "Mary won " << r[0] << " times and John won " << r[1] << " times" << "\n";
        
    }

    return 0;
}