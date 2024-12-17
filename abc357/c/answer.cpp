#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> G;

void allwhite(int num, int x, int y){
    for(int i = x; i < x + pow(3, num - 1); i++){
        for(int j = y; j < y + pow(3, num - 1); j++){
            G[i][j] = '.';
        }
    }
}

void f(int num, int x, int y){
    if(num == 0){
        G[x][y] = '#';
        return;
    }

    for(int i = x; i < x + 3; i++){
        for(int j = y; j < y + 3; j++){
            if(i == x + 1 && j == y + 1){
                allwhite(num, x + pow(3, num - 1), y + pow(3, num - 1));
            } else {
                f(num - 1, x + (i - x) * pow(3, num - 1), y + (j - y) * pow(3, num - 1));
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    G.assign(pow(3, n), vector<char>(pow(3, n)));
    f(n, 0, 0);

    for(int i = 0; i < pow(3, n); i++){
        for(int j = 0; j < pow(3, n); j++){
            cout << G[i][j];
        }
        cout << '\n';
    }

    return 0;
}
