#include <bits/stdc++.h>
using namespace std;

int main(){
    int D, VF, VG;

    while(cin >> D >> VF >> VG){
        double tf = (double) 12/VF;
        double tg = (double) sqrt((D*D) + 144)/VG;

        if (tg <= tf) cout << "S" << "\n";
        else cout << "N" << "\n";
    }

    return 0;
}