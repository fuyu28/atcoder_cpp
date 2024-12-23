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
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

int main() {
    lint h,w;
    cin >> h >> w;
    vector<string> field(h);
    rep(i, 0, h) cin >> field[i];
    lint sx = 0, sy = 0;
    vector<lint> dx = {0, 1};
    vector<lint> dy = {1, 0};

    Graph dist(h, vector<lint>(w, -1));
    dist[sx][sy] = 0;
    queue<pll> que;
    que.push(make_pair(sx, sy));
    while (!que.empty()) {
        pll cur = que.front();
        lint x = cur.first, y = cur.second;
        que.pop();
        rep(dir, 0, 4) {
            lint nx = x + dx[dir], ny = y + dy[dir];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (field[nx][ny] == '#') continue;
            if (dist[nx][ny] == -1) {
                que.push(make_pair(nx, ny));
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    } 
    lint ans = 0;
    rep(i, 0, h) {
        rep(j, 0, w) {
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans + 1 << '\n';
    return 0;
}