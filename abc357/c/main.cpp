#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

void level_grid(int length, int partition, vector<vector<char>>& grid) {
    if (partition == 1) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (i == 3 and j == 3) grid.at(i).at(j) = '.';
                else grid.at(i).at(j) = '#';
            }
        }
        return;
    }
    for (int i = partition; i < partition * 2; ++i) {
        for (int j = partition; j < partition * 2; ++j) {
            grid.at(i).at(j) = '.';
        }
    }
        
    for (int i = 0; i < 8; ++i) {
        int next_length = length / 3;
        int next_partition = partition / 3;
        level_grid(next_length, next_partition, grid);
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    int length = pow(3, N);
    int partition = length / 3;
    vector<vector<char>> grid(length, vector<char>(length));

    level_grid(length, partition, grid);

    for (int i = 0; i < sz(grid); ++i) {
        for (int j = 0; j < sz(grid); ++j) {
            cout << grid.at(i).at(j);
        }
        cout << endl;
    }
    return 0;
}