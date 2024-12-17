#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ulint = unsigned long long;
using pll = pair<lint, lint>;
using Graph = vector<vector<lint>>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

int main() {
    lint h,w;
    cin >> h >> w;
    lint n = h*w;
    vector<string> field(h);
    rep(i, 0, h) cin >> field[i];
    lint sx = 0, sy = 0;

    Graph dist(h, vector<lint>(w, -1));
    dist[sx][sy] = 0;


    return 0;
}