#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> matrix(5, vector<int>(5));
    int c = 0, x, y;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }

    while (x != 2 || y != 2){
        if (x < 2){
            x++;
            c++;
        }

        if (x > 2){
            x--;
            c++;
        }

        if (y < 2){
            y++;
            c++;
        }

        if (y > 2){
            y--;
            c++;
        }
    }

    cout << c << "\n";

    return 0; 
}