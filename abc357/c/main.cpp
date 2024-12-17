#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

vector<vector<char>> G;

void allwhite(int num, int x, int y) {
    for (int i = x; i < x + pow(3, num-1); ++i) {
        for (int j = y; j < y + pow(3, num-1); ++j) {
            G.at(i).at(j) = '.';
        }
    }
}

void f(int num, int x, int y) {
    if (num == 0) {
        G.at(x).at(y) = '#';
        return;
    }

    for (int i = x; i < x+3; ++i) {
        for (int j = y; j < y+3; ++j) {
            if (i == x+1 && j == y+1) {
                allwhite(num, x + pow(3, num-1), y + pow(3, num-1));
            } else {
                f(num-1, x + (i-x) * pow(3, num-1), y + (j-y) * pow(3, num-1));
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    int length = pow(3, N);
    G.assign(length, vector<char>(length));
    f(N, 0, 0);

    for (int i = 0; i < pow(3, N); ++i) {
        for (int j = 0; j < pow(3, N); ++j) {
            cout << G.at(i).at(j);
        }
        cout << endl;
    }
    
    return 0;
}